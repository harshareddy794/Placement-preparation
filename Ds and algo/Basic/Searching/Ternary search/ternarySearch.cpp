#include <iostream>

using namespace std;

int ternarySearch(int arr[], int x, int l, int r)
{
    while (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (arr[mid1] == x) {
            return mid1;
        }
        if (arr[mid2] == x) {
            return mid2;
        }
        if (x < arr[mid1]) {
            r = mid1 - 1;
        }
        else if (x > arr[mid2]) {
            l = mid2 + 1;
        }       
        else {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,4,5,7,9,11,13,15,22},l=0,r=10;
    cout<<"Element found at "<<ternarySearch(arr,2,l,r);
    return 0;
}



// Time complexity - O(log(base 3)n)
