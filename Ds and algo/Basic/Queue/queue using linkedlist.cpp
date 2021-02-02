#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct queue{
    Node *front,*rear;
    queue(){
        front = NULL;
        rear = NULL;
    }
    void enque(int x){
        Node *temp = new Node(x);
        if(front==NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void deque(){
        if(front==NULL){
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front == NULL){
            rear = NULL;
        } 
        delete (temp);
    }
    void transversal(){
        Node *temp = front;
        while(temp!=rear){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{
   queue qe = queue();
   qe.enque(10);
   qe.enque(20);
   qe.enque(30);
   qe.enque(40);
   qe.enque(50);
   qe.transversal();
   qe.deque();
  qe.transversal();
   return 0;
}
