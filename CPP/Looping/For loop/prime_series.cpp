#include <iostream>
#include<math.h>

using namespace std;

int main(){
    int i,j,n,flag=1;
    cin>>n;
    for(i=2;i<=n;i++){
        flag=1;
        for(j=2;j<=int(i/2);j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<i<<" ";
        }
    }
}
