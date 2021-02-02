#include <iostream>

using namespace std;

struct queue{
    int cap,size;
    int *arr;
    queue(int c){
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull(){
        return(size==cap);
    }
    bool isEmpty(){
        return(size==0);
    }
    void enque(int x){
        if(isFull()){
            return;
        }else{
            arr[size] = x;
            size++;
        }
    }
    void deque(){
        if(isEmpty()){
            return;
        }else{
            for(int i=0;i<size-1;i++){
                arr[i] = arr[i+1];
            }
            size--;
        }
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }else{
            return arr[0];
        }
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }else{
            return arr[size-1];
        }
    }
};

int main()
{
    queue qe = queue(10);
    cout<<qe.isEmpty()<<endl;
    qe.enque(10);
    qe.enque(20);
    qe.enque(30);
    cout<<qe.isFull()<<endl;
    qe.deque();
    cout<<qe.getFront()<<endl;
    cout<<qe.getRear()<<endl;
   return 0;
}
