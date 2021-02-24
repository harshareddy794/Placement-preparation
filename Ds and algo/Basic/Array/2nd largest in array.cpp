#include <iostream>

using namespace std;

int maxInArray(int arr[],int n){
       int max = INT16_MIN;
       for(int i=0;i<n;i++){
       if(arr[i]>max){
           max = arr[i];
       }
   }
   return max;
}
int nextMaxInArray(int arr[],int n){
    int max = maxInArray(arr,n);
    int nextMax = INT16_MIN;
    for(int i=0;i<n;i++){
           if(arr[i]<max && arr[i]>nextMax){
               nextMax = arr[i];
            }
        }
    return nextMax;
}

int main()
{
    int arr[] ={4,67,12,34,6,99,24,73,3,2,96,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<nextMaxInArray(arr,n);
    return 0;
}
#include <iostream>

using namespace std;

int maxInArray(int arr[],int n){
       int max = INT16_MIN;
       for(int i=0;i<n;i++){
       if(arr[i]>max){
           max = arr[i];
       }
   }
   return max;
}
int nextMaxInArray(int arr[],int n){
    int max = maxInArray(arr,n);
    int nextMax = INT16_MIN;
    for(int i=0;i<n;i++){
           if(arr[i]<max && arr[i]>nextMax){
               nextMax = arr[i];
            }
        }
    return nextMax;
}

int main()
{
    int arr[] ={4,67,12,34,6,99,24,73,3,2,96,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<nextMaxInArray(arr,n);
    return 0;
}

