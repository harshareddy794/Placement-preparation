#include <iostream>
#include<string.h>
using namespace std;

bool unique(char string[]){
    int arr[255] = {0};
    bool flag = true; 
    for(int i=0;i<strlen(string);i++){
        arr[string[i]]++;
    }
    
    for(int i=0;i<255;i++){
        if(!(arr[i]==0 || arr[i]==1)){
            flag= false;
            return flag;
        }
    }
    return flag;
}

int main()
{
   char string[] = "";
   bool res = unique(string);
   if(res){
       cout<<"Unique";
   }else{
       cout<<"Not unique";
   }
   
   return 0;
}
