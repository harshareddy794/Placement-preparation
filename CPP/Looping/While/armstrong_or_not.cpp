#include <iostream>

#include <cmath>

#include <string>


using namespace std;


int main()
{
   
int number,orginal_number,new_number=0,rem;
   
cin>>number;
   
orginal_number=number;
   
while(number>0){
       
rem=number%10;
       
new_number=new_number+(rem*rem*rem);
       
number=number/10;
       
cout<<new_number<<endl;
   
}
   
if(orginal_number==new_number){
       
cout<<"Armstrong number";
   
}else{
       
cout<<"Not armstrong number";
   
}

return 0;
}