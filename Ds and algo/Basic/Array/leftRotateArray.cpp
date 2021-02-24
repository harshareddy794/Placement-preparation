#include <iostream>

using namespace std;

void rotateArray(int arr[], int n)
{   int i, temp = arr[0];
    for(i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1]=temp;
    
    for(i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    int result,arr[]={0,1,2,3,4,5,6,7,8,9,10},n=11;
    rotateArray(arr,n);
    return 0;
} 
