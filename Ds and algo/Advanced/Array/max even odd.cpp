#include<bits/stdc++.h>
using namespace std;

int max_even_odd(int arr[], int n)
{
    int res = 0, curr = 1;
    for(int i=1;i<n;i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0)
        ||(arr[i]%2!=0 && arr[i-1]%2==0)){
            curr++;
            res = max(res,curr);
        }else{
            curr = 0;
        }
    }
    return res;
}


int main()
{
	int arr[] = {1, 2, 3, 4, 5, 7, 9} ;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << max_even_odd(arr, n);
	return 0;
}

