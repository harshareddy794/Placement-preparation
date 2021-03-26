#include <iostream>

using namespace std;

void merge(int arr[],int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++){
        arr1[i] = arr[l+i];    
    }
    for(int j=0;j<n2;j++){
        arr2[j] = arr[m+1+j];    
    }
    int i = 0,j = 0,count = l;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            arr[count] = arr1[i];
            i++;
        }else{
            arr[count] = arr2[j];
            j++;
        }
        count++;
    }
    while(i<n1){
        arr[count] = arr1[i];
        i++;
        count++;
    }
    while(j<n2){
        arr[count] = arr2[j];
        j++;
        count++;
    }
    
}


void merge_sort(int arr[],int l,int r){
	if(l>=r){
		return;
	}
    int m = l + (r-l)/2;
    merge_sort(arr,l,m);
    merge_sort(arr,m+1,r);
    merge(arr,l,m,r);
}

int main()
{
    int arr[] = {0,5,8,99,52,15,36,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
