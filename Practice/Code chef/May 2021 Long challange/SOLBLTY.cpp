#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t>0){
       int x,a,b;
       cin>>x>>a>>b;
       cout<<(a+(100-x)*b)*10<<endl;
       t--;
   }
   return 0;
}


//Sample Input
//3
//40 120 1
//35 120 2
//40 115 3
//
//Sample Output
//1800
//2500
//2950
