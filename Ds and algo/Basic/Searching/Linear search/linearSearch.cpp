#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x)
        {
            return i-1;
        }
    }
}


int main()
{
  int arr[] = {4,6,7,0,8,91,12,33,156,2},n=10;
  cout<<"Element found at "<<linearSearch(arr,n,12);
   
   return 0;
}


// Time complexity - O(n)
