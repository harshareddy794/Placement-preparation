#include <iostream>
using namespace std;

void rotateArray(int arr[], int n,int d){
	int aux_arr[d],i;
	for(i=0;i<d;i++){
		aux_arr[i] = arr[i];
	}
	for(i=d;i<=n;i++){
		arr[i-d] = arr[i];
	}
	for(i=d-1;i>=0;i--){
		arr[n-d+i] = aux_arr[i]; 
	}
}


int main()
{
int arr [] = {1,2,3,4,5},d=2,n=5,i;
rotateArray(arr,n,d);
for(i=0;i<n;i++)
	{
    	cout<<arr[i];
    	cout<<"\n";
  	}
  return 0;
}


// Time complexity  -> (n)
// 
// auxiliary memory  -> (d)

