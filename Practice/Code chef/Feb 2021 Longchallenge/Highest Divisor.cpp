#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,i,div[100],divless[10],count=1,newCount=0;
   cin>>n;
   div[0]=1;
   for(i=2;i<=(n/2);i++){
       if(n%i==0){
        div[count] = i;
        count++;
       }
   }
   div[count] = n;
   count++;
   
   
   for(i=0;i<count;i++)
   {
       if(div[i]<=10){
           divless[i] = div[i];
           newCount++;
       }
   }

    cout<<*max_element(divless,divless+newCount);
   
   return 0;
}
