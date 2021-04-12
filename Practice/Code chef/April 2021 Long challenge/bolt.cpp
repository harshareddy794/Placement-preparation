#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
   unsigned long int t;
   cin>>t;
   while(t>0){
        float k1,k2,k3,v,spd,tme,target;
        target = abs(9.58);
        cin>>k1>>k2>>k3>>v;
        spd = k1*k2*k3*v;
        tme = 100/spd;
        tme = int((tme*100)+0.5);
        tme = tme/100;
        if(target>tme){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        t--;
   }
   
   return 0;
}
