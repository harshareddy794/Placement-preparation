#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int *temp = a;
    a = b;
    b = temp;
}

void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>arr[j+1]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
}

int main()
{
   int *arr,n,i;
   cin>>n;
   arr = new int[n];
   for(i=0;i<n;i++){
       cin>>arr[i];
   }
   insertion_sort(arr,n);
   
   return 0;
}
