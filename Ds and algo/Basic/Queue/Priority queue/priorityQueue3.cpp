#include <iostream>
#include<queue>

using namespace std;

int main()
{   
    int arr[] = {10,15,13,22,18,50,8};
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+7);
    
    cout<<"size: "<<pq.size()<<endl;
    cout<<"Top: "<<pq.top()<<endl;
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
