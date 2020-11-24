#include <iostream>

using namespace std;

int binarySearch(int arr[], int x, int low, int high){
    int mid = (low+high)/2;
    if(arr[mid]==x){
        return mid+1;
    }
    else if(arr[mid]>x){
        return binarySearch(arr,x,low,mid-1);
    }
    else{
        return binarySearch(arr,x,mid+1,high);
    }
}


int main()
{
    int arr[] = {1,2,4,5,7,9,11,13,15,22},n=11;
    cout<<"Element found at "<<binarySearch(arr,11,0,n-1);
    return 0;
}

// Time complexity  -> O(log(n))
// 

