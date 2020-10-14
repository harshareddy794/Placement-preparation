#include <iostream>


using namespace std;


int main()

{
   
int number,sum=0;

cin>>number;

while(number>0){

   	sum=sum+number%10;
       
	number=number/10;
}

cout<<sum;
return 0;

}