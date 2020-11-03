#include <iostream>
using namespace std;

void rotateArray(int arr[], int n){
    int temp,i;
    temp = arr[0];
    for(i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] =temp;
}

int main()
{
  int arr [] = {1,2,3,4,5},d=2,n=5,i;
  for(i=0;i<d;i++){
     rotateArray(arr,n);
  }
for(i=0;i<n;i++){
    cout<<arr[i];
    cout<<"\n";
  }
  return 0;
}


// Time complexity  -> (n*d)
// 
// auxiliary memory  -> (1)
