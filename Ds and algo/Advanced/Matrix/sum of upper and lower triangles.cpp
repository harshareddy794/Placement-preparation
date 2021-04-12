#include <iostream>

using namespace std;

void sum(int mat[3][3],int r,int c){
    int up_tri = 0, lo_tri=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i<=j){
                up_tri+=mat[i][j];
            }
            if(j<=i){
                lo_tri+=mat[i][j];
            }
        }
    }
    cout<<up_tri<<" "<<lo_tri<<endl;
}

int main()
{
    int r = 3;
    int c = 3;
 
    int mat[3][3] = {{ 6, 5, 4 },
                     { 1, 2, 5 },
                     { 7, 9, 7 }};
                      
    sum(mat, r, c);
    return 0;
}
