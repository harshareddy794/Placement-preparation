#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int *temp = a;
    a = b;
    b = temp;
}

class minHeap{
    int *arr,size,cap;
    public:
        minHeap(int capacity){
            arr = new int[capacity];
            size = 0;
            cap = capacity;
        }
        minHeap(int ele[],int n_element_array,int n){
            arr = new int[n];
            size = 0;
            cap = n;
            for(int i=0;i<n_element_array;i++){
                arr[i] = ele[i];
                size++;
                }
        }
        int left(int i){
           return ((2*i)+1); 
        }
        int right(int i){
           return ((2*i)+2); 
        }
        int parent(int i){
            return ((i/2)-1);
        }
        void insert(int ele){
            size++;
            arr[size-1] = ele;
            for(int i=size-1; i!=0 && arr[i]<arr[parent(i)];){
                swap(arr[i],arr[parent(i)]);
                i = parent(i);
            }
        }
        void heapify(int i){
            int lt = left(i),rt = right(i), smallest = i;
            if(lt<size && arr[lt]<arr[smallest]){
                smallest = lt;
            }
            if(rt<size && arr[rt]<arr[smallest]){
                smallest = rt;
            }
            if(i!=smallest){
                swap(arr[i],arr[smallest]);
                heapify(smallest);
            }
        }
        int extractMin(){
            swap(arr[0],arr[size-1]);
            int ele = arr[size-1];
            size--;
            heapify(0);
            return ele;
        }
        void buildHeap(){
            for(int i = ((size-1/2)-1);i>=0;i--){
                heapify(i);
            }
        }
        void print(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    int arr[] = {15,12,55,7,18,93,28};
    int n = sizeof(arr)/sizeof(arr[0]);
    minHeap heap(arr,n,20);
    heap.print();
    heap.buildHeap();
    heap.print();
    // Getting kth smallest element 
    int k = 1;
    for(int i=0;i<k-1;i++){
        heap.extractMin();
    }
    cout<<heap.extractMin();
    return 0;
}
