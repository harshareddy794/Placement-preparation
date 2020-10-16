#include <iostream>


using namespace std;


int main()
{
    
int i,number,sum=0;
    
cin>>number;
    
for(i=1;i<number;i++){
        
if(number%i==0){
            
sum=sum+i;
        
}
    
}
   
if(sum==number){
       
cout<<"Perfect";
   
}else{
       
cout<<"Not perfect";
   
}
   
return 0;

}