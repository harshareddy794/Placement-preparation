#include <iostream>

using namespace std;

int main()
{
   int number,rev_number=0;
   cin>>number;
   while(number>0){
       rev_number=(rev_number*10)+number%10;
       number=number/10;
   }
   cout<<rev_number;
   return 0;
}
