#include <bits/stdc++.h>

using namespace std;

char nonrepeatingCharacter(string a)
{
    int res = INT32_MAX;
    int LF[256];
    for(int i=0;i<255;i++){
        LF[i] = -1;
    }
    for(int i=0;i<a.length();i++){
        if(LF[a[i]]==-1){
            LF[a[i]]=i;
        }else{
            LF[a[i]] = -2;
        }
    }
    for(int i=0;i<255;i++){
        if(LF[i]>=0){
            res = min(res,LF[i]);
        }
    }
    if(res==INT32_MAX){
        return '$';   
    }else{
        return a[res];
    }
}

int main()
{
    string a = "hello";
    cout<<nonrepeatingCharacter(a);
    return 0;
}
