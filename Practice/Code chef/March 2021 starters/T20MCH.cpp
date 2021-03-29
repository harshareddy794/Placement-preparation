#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int r,o,c,remain,max_score;
    cin>>r>>o>>c;
    remain = 20-o;
    remain = remain*6;
    max_score = remain*6;
    if(max_score+c>r){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
