#include <iostream>

using namespace std;

void isSorted(int arr[], int n)
{   int i, sorted = 1;
    for(i=1; i<n; i++){
        if(!(arr[i++] < arr[i])){
             sorted = 0;
        }
    }
    if(sorted){
        cout<<"Sorted";
    }else{
        cout<<"Not sorted";
    }
}


int main(){
    int result,arr[]={0,1,2,3,4,5,6,7,8,9,10},n=11;
    isSorted(arr,n);
    return 0;
} 
