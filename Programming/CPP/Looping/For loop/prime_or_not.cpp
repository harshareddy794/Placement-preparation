#include <iostream>
#include<math.h>

using namespace std;

int main(){
    int i,n,flag=1;
    cin>>n;
    for(i=2;i<=int(n/2);i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<"Prime";
    }else{
        cout<<"Not prime";
    }
}
