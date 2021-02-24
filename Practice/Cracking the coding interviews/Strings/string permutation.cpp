#include <iostream>
#include<string.h>

using namespace std;


bool permutation(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    int arr[255] = {0};
    bool flag = true;
    for(int i=0;i<s1.length();i++){
        arr[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        arr[s2[i]]--;
    }
    for(int i=0;i<255;i++){
        if(arr[i]!=0){
            flag = false;
            return flag;
        }
    }
    return flag;
}

int main()
{
   string s1 = "ABCD";
   string s2 = "BACD";
   bool ans = permutation(s1,s2);
   if(ans){
       cout<<"Yes";
   }else{
       cout<<"No";
   }
   
   return 0;
}
