#include <iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);   
    q.push(60);
    cout<<q.size()<<" "<<q.front()<<" "<<q.back()<<endl;
    q.pop();
    cout<<q.size()<<" "<<q.front()<<" "<<q.back();
    return 0;
}
