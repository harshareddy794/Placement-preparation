#include <iostream>

using namespace std;

int maxAndMin(int arr[], int n)
{   int i,max = arr[0],min = arr[0];
    for(i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }else if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"Max "<<max<<endl;
    cout<<"Min "<<min;
}


int main(){
    int result,arr[]={1,9,6,7,1,12,8,16,2},n=9;
    maxAndMin(arr,n);
    return 0;
}

// Time complexity - O(n)
