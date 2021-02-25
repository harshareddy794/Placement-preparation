#include <iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

bool isAnagram(string a, string b){
    int arr[255] = {0}, i;
    bool flag = true;
    if(a.length()!=b.length()){
        return false;
    }
    for(i=0;i<a.length();i++){
        arr[a[i]]++;
    }
    for(i=0;i<b.length();i++){
        arr[b[i]]--;
    }
    for(i=0;i<255;i++){
        if(arr[i]!=0){
            flag = false;
            break;
        }
    }
    return flag;
}


int main(){
    string a = "hello";
    string b = "hleol";
    if(isAnagram(a,b)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
