#include <iostream>
using namespace std;

int max(int res, int val){
	return (res<val) ? val : res;
}

int min(int res, int val){
	return (res>val) ? val : res;
}


void maxDiff(int arr[], int n){
	int res = arr[1]-arr[0],i;
	int minVal = arr[0];
	for(i=1;i<n;i++){
		res = max(res, arr[i]-minVal);
		minVal = min(minVal,arr[i]);
	}
	cout<<res;
}


int main()
{
int arr [] = {2,3,10,6,4,8,1},n=7,i;
maxDiff(arr,n);

return 0;
}


// Time complexity  -> (n*d)
// 

