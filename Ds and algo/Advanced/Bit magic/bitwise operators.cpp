#include <iostream>

using namespace std;

int main()
{
   unsigned int a = 5,b = 3;
   cout<<"A & B: "<<(a&b)<<endl;
   cout<<"A | B: "<<(a|b)<<endl;
   cout<<"A ^ B: "<<(a^b)<<endl;
   cout<<"A leftshift by 2: "<<(a>>2)<<endl;
   cout<<"A rightshift by 3: "<<(a<<3)<<endl;
   cout<<"Negating A:"<<(~a)<<endl;
   return 0;
}
