#include<bits/stdc++.h>
using namespace std;

int max_sum_subarray(int arr[], int n)
{
    int res = arr[0],max_ending = arr[0];
    for(int i=1;i<n;i++){
        max_ending = max(max_ending+arr[i],arr[i]);
        res = max(res,max_ending);
    }
    return res;
}


int main()
{
	int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << max_sum_subarray(arr, n);
	return 0;
}

