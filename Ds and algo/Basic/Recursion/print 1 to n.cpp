#include <iostream>

using namespace std;

int printN(int n){
    if(n==0){
        return 0;
    }else{
        printN(n-1);
    }
        cout<<n<<endl;
}

int main()
{
   int n=10;
   printN(10);
   return 0;
}


