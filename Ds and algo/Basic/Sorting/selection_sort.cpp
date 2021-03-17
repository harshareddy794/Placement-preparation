#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int *temp = a;
    a = b;
    b = temp;
}

void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minval = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minval]){
                minval = j;
            }
        }
        swap(arr[minval],arr[i]);
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
   selection_sort(arr,n);
   
   return 0;
}
