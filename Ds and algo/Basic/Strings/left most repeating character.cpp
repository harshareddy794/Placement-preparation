#include<bits/stdc++.h>

using namespace std;

int leftMostRepeatingCharacter(string a){
    int res = INT_MAX;
    int LF[256];
    for(int i=0;i<255;i++){
        LF[i] = -1;
    }
    for(int i=a.length();i>=0;i--){
        if(LF[a[i]]==-1){
            LF[a[i]]=i;
        }else{
            res = i;
        }
    }
    return (res==INT_MAX)? -1 : res;
}

int main()
{
    string a = "hello world";
    cout<<leftMostRepeatingCharacter(a);
    return 0;
}
