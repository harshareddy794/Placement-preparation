#include <iostream>

using namespace std;

int printArray(int arr[],int n,int i){
    cout<<arr[i]<<endl;
    if(i==n){
        return 0;
    }
    else{
        return printArray(arr,n,++i);
    }
}


int main()
{
   int arr[] = {1,2,3,4,5},n=5,i=0;
   printArray(arr,n-1,i);
   
   return 0;
}

