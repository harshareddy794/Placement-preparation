#include <iostream>
#include <deque>
using namespace std;

struct mystr{
    deque<int> dq;
    void insertMin(int x){
        dq.push_front(x);
    }
    void insertMax(int x){
        dq.push_back(x);
    }
    int getMin(){
        return dq.front();
    }
    int getMax(){
        return dq.back();
    }
    int extractMin(){
        int x=dq.front();;
        dq.pop_front();
        return x;
    }
    int extractMax(){
        int x=dq.back();
        dq.pop_back();
        return x;
        
    }
};

int main()
{
    mystr s;
    s.insertMin(10);
    s.insertMin(5);
    s.insertMax(15);
    s.insertMax(20);
    cout<<"Min: "<<s.getMin()<<endl;
    cout<<"Max: "<<s.getMax()<<endl;
    cout<<"Pop min: "<<s.extractMin()<<endl;
    cout<<"Pop max: "<<s.extractMax()<<endl;
    cout<<"Min: "<<s.getMin()<<endl;
    cout<<"Max: "<<s.getMax()<<endl;
   return 0;
}
