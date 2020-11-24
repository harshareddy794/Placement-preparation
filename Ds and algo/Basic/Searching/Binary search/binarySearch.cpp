#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int x){
    int low = 0,high = n-1,mid;
    while(low < high){
        mid = (low+high)/2;
        if(arr[mid]==x){
            return mid+1;
        }
        else if(arr[mid]>x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}


int main()
{
    int arr[] = {1,2,4,5,7,9,11,13,15,22},n=11;
    cout<<"Element found at "<<binarySearch(arr,n,22);
    return 0;
}


// Time complexity  -> O(log(n))
// 

