#include <iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(23);
    pq.push(15);
    pq.push(10);
    pq.push(25);
    pq.push(22);
    cout<<"size: "<<pq.size()<<endl;
    cout<<"Top: "<<pq.top()<<endl;
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
