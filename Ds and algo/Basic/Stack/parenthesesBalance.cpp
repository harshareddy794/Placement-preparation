#include <iostream>
#include<stack>

using namespace std;

bool matching(char a, char b){
    return(
    (a=='(' && b==')')||
    (a=='[' && b==']')||
    (a=='{' && b=='}')
    );
}

bool isBalanced(string s){
    stack<char> a;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            a.push(s[i]);
        }
        else if(s[i]==' '){
            continue;
        }else{
            if(a.empty()==true){
                return false;
            }else if(matching(a.top(),s[i])==false){
                return false;
            }else{
                a.pop();
            }
        }
    }
    return(a.empty());
}

int main()
{   char a[] =  "{[()]}";
    if(isBalanced(a)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
