#include<iostream>
void leader(){
	int arr [] = {7,10,4,10,6,5,2},i,j,n=7;
	bool flag;
	for(i=0;i<n;i++){
		flag=true;
		for(j=i+1;j<n;j++){
			if(arr[i] <= arr[j]){
				flag=false;
				break;
			}
		}
		
		if(flag){
			std::cout<<arr[i];
			std::cout<<" ";
		}
	}
		
}
int main(){
	leader();
	return 0;
}


