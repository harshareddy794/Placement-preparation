#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b= temp;
}

class minHeap{
    public:
    int *arr;
    int cap,size;
    minHeap(int c){
        arr = new int[c];
        size = 0;
        cap = c;
    }
    int left(int i){
        return ((2*i)+1);
    }
    int right(int i){
        return ((2*i)+2);
    }
    int parent(int i){
        return ((i-1)/2);
    }
    void insert(int x){
        if(size == cap){
            return;
        }else{
            size++;
            arr[size-1]=x;
            for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];){
                swap(arr[i],arr[parent(i)]);
                i = parent(i);
            }
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<< " ";
        }
    }
};

int main()
{
    minHeap heap(15);
    heap.insert(1);
    heap.insert(10);
    heap.insert(30);
    heap.insert(50);
    heap.insert(20);
    heap.insert(108);
    heap.insert(70);
    heap.insert(20);
    heap.insert(202);
    heap.insert(20);
    heap.print();
   return 0;
}
