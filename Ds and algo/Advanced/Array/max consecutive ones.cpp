#include<bits/stdc++.h>
using namespace std;

int max_consecutive_ones(bool arr[], int n)
{
	int count = 0; 
	int result = 0;

	for (int i = 0; i < n; i++)
	{
		
		if (arr[i] == 0){
		    count = 0;
		    
		}else{
			count++;
			result = max(result, count);
		}
	}

	return result;
}


int main()
{
	bool arr[] = {1, 1, 0, 0, 1, 0, 1, 0,1, 1, 1, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << max_consecutive_ones(arr, n);
	return 0;
}

