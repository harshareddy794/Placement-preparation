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
    minHeap(int n){
        arr = new int[n];
        size = 0;
        cap = n;
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
    
    void heapify(int i){
        int lt = left(i); int rt = right(i);
        int smallest = i;
        if(lt<size && arr[lt]<arr[i]){
            smallest = lt;
        }if(rt<size && arr[rt]<arr[i]){
            smallest = rt;
        }
        if(i!=smallest){
            swap(arr[i],arr[smallest]);
            heapify(smallest);
        }
    }
    int extractMin(){
        swap(arr[0],arr[size-1]);
        int num = arr[size-1];
        size--;
        heapify(0);
        return num;
    }
    void decreaseKey(int pos, int num){
        arr[pos] = num;
        while(pos!=0 && arr[parent(pos)]>arr[pos]){
            swap(arr[parent(pos)],arr[pos]);
            pos = parent(pos);
        }
    }
    void deleteElement(int pos){
        arr[pos] = INT32_MIN;
        heapify(0);
        extractMin();
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
};

int main()
{
    minHeap heap(10);
    heap.insert(10);
    heap.insert(40);
    heap.insert(20);
    heap.insert(30);
    heap.insert(50);
    heap.print();
    heap.heapify(0);
    heap.deleteElement(2);
    heap.print();
    return 0;
}
