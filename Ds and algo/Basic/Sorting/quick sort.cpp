#include <iostream>

using namespace std;

void swap(int *a,int *b){
    int *temp = a;
    a = b;
    b = temp;
}

int hoare_partition(int arr[],int l,int h){
    int pivot = arr[l];
    int i = l-1,j = h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j){
            return j;
        }
        swap(arr[i],arr[j]);
    }
}

void quick_sort(int arr[],int l,int h){
    if(l<h){
        int p = hoare_partition(arr,l,h);
        merg_sort(arr,l,p);
        merg_sort(arr,p+1,h);
    }
    for(int i=0;i<h;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
   int arr[] = {12,18,34,56,10,6,40,0};
   int n = sizeof(arr)/sizeof(arr[0]);
   quick_sort(arr,0,n-1);
   return 0;
}
