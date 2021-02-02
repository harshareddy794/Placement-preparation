#include <iostream>
#include <deque>
using namespace std;

int main()
{
   deque<int> dq;
   dq.push_front(10);
   dq.push_front(20);
   dq.push_front(30);
   dq.push_back(40);
   dq.pop_front();
   for(auto x: dq){
       cout<<x<< " ";
   }
   cout<<endl;
   auto it = dq.begin();
   it = dq.insert(it,50);
   it = dq.insert(it,2,3);
   it = dq.insert(it,65);
      for(auto x: dq){
       cout<<x<< " ";
   }
   cout<<endl;
   cout<<dq.size();
   return 0;
}
