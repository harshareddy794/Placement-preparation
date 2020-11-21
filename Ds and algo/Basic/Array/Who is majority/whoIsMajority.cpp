#include <iostream>

using namespace std;

int majorityWins(int arr[], int n, int x,int y)
{   int i,count_x=0,count_y=0;
       for(i=0;i<n;i++){
           if(arr[i]==x){
               count_x++;
           }else if(arr[i]==y){
               count_y++;
           }else{
               continue;
           }
       }
       if(count_x==count_y){
             return x > y ?  x :  y; 
       }else{
           return count_x > count_y ?  x :  y;
    }
}


int main(){
    int result,arr[]={2,1,2,3,4,2,1,2,2},n=9,x=2,y=3;
    result = majorityWins(arr,n,x,y);
    cout<<result;
    return 0;
} 
