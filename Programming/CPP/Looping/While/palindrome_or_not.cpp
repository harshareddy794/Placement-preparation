#include <iostream>

using namespace std;

int number_reverse(int number){
    int reverse_number=0;
    while(number>0){
        reverse_number=(reverse_number*10)+(number%10);
        number=number/10;
    }
    return reverse_number;
}


int main()
{
    int number,reverse_number;
    cin>>number;
    reverse_number=number_reverse(number);
    if(reverse_number==number){
        cout<<"Number is palindrome";
    }else{
        cout<<"Number is not palindrome";
    }
   
   return 0;
}


