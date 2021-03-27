#include <iostream>
#include<math.h>

using namespace std;

bool turn(){
    long double u,v,a,s,allow;
    cin>>u>>v>>a>>s;
    if((u == v) && (u==1)){
        return true;
    }
    allow = sqrt((u*u)-(2*a*s));
    if(allow<=v){
        return true;
    }else{
        return false;
    }
}

int main()
{
   unsigned long int t;
   cin>>t;
   while(t>0){
        bool ans = turn();
        if(ans){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
       t--;
    }
   return 0;
}

