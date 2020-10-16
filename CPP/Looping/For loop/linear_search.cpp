#include <iostream>
#include<math.h>

using namespace std;

int main(){
    int i,n=5,target=9,flag=0,arr[]={7,4,9,0,6};
    
    for(i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"Element found at location "<<i+1;
            flag=1;
            break;
        }
    }
    if(!flag){
       cout<<"Element not found";
    }
}
