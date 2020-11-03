#include<iostream>
void leader(){
	int arr [] = {7,10,4,10,6,5,2},i,j,n=7;
	int curr_lead= arr[n-1];
	std::cout<<curr_lead;
	for(i=n-2;i>=0;i--){
		if(curr_lead<arr[i]){
			std::cout<<arr[i];
			std::cout<<" ";
			curr_lead = arr[i];
		}
	}
		
}
int main(){
	leader();
	return 0;
}

// Time complexity -> O (n)
