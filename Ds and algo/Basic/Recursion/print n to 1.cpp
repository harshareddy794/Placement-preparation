#include <iostream>

using namespace std;

int printN(int n){
    cout<<n<<endl;
    if(n==1){
        return 0;
    }else{
        printN(n-1);
    }
}

int main()
{
   int n=10;
   printN(10);
   return 0;
} 

