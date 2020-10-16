#include <iostream>

using namespace std;

int main()
{
   int mid,low,high,n=8,arr[]={1,3,6,10,13,19,21,25},x=19,flag=0;
   low=0,high=n;
   while(low<=high){
   mid=(low+high)/2;
   if(arr[mid]==x){
       cout<<"Element found at "<<mid;
       flag=1;
       break;
   }else{
       if(x<arr[mid]){
           high=mid-1;
       }else{
           low=mid+1;
       }
   }
   }
  if(!flag){
       cout<<"Element not found";
   }
   return 0;
}
