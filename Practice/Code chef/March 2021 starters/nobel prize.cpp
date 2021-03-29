#include <iostream>

using namespace std;

bool nobel_prize(){
    unsigned long int n,m;
    cin>>n>>m;
    unsigned long int arr[m] = {0},ind;
    for(unsigned long int i=0;i<n;i++){
        cin>>ind;
        arr[ind-1]++;
    }
    for(unsigned long int i=0;i<m;i++){
        if(arr[i]==0){
            return true;
        }
    }
    return false;
}

int main()
{
   unsigned long int t;
   cin>>t;
   while(t>0){
       bool ans = nobel_prize();
       if(ans){
           cout<<"Yes"<<endl;
       }else{
           cout<<"No"<<endl;
       }
       t--;
   }
   return 0;
}

