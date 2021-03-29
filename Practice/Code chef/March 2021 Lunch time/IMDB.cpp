#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t>0){
       unsigned long int size,space,max;
       cin>>size>>space;
       unsigned long int arr[size][2];
       for(unsigned long int i = 0;i<size;i++){
           cin>>arr[i][0];
           cin>>arr[i][1];
       }
       max = 0;
      for(unsigned long int i = 0;i<size;i++){
        if(arr[i][0]<=space){
            if(arr[i][1]>max){
                max = arr[i][1];
            }
        }
       }
       cout<<max<<endl;
       t--;
    }
   return 0;
}
