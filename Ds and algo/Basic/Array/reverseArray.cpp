#include <iostream>

using namespace std;

void swap(int arr[], int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int arrayReverse(int arr[], int n)
{   int i;
    for(i=0;i<(n/2);i++){
        swap(arr,arr[i],arr[(n-1)-i]);
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    int result,arr[]={0,1,2,3,4,5,6,7,8,9,10},n=11;
    arrayReverse(arr,n);
    return 0;
} 
