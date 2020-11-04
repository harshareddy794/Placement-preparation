#include <iostream>
using namespace std;

void swap(int arr[],  int low,int high){
	int temp;
	temp = arr[low];
	arr[low] = arr[high];
	arr[high] = temp;
}

void moveZeros(int arr[], int n){
	int i,j;
	for(i=0;i<n;i++){
		if(arr[i]==0){
			for(j=i+1;j<n;j++){
				if(arr[j]!=0){
					swap(arr,i,j);
					
				}
			}
		}
	}
}


int main()
{
int arr [] = {0,2,0,4,5},n=5,i;
moveZeros(arr,n);
for(i=0;i<n;i++)
	{
    	cout<<arr[i];
    	cout<<"\n";
  	}
  return 0;
}


// Time complexity  -> (n*d)
// 
// auxiliary memory  -> (1)

