#include <iostream>


using namespace std;

//  Best way of finding sum of numbers is using formula

// 

// sum = (n*(n+1))/2

// 

int main()

{
    
int n,i,sum=0;
    
cin>>n;
    
for(i=0;i<=n;i++){
        
sum=sum+i;
    
}
    
cout<<sum<<endl;
    
    
cout<<(n*(n+1))/2;

}