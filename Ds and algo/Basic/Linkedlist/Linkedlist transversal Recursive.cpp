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

int printListRecursive( Node *head ){
    if(head!=NULL){
        cout<<(head->data)<<" ";
        printListRecursive(head->next);
    }else{
        return 0;
    }
}


int main()
{
   Node *head = new Node(5);
   Node *temp1 = new Node(7);
   Node *temp2 = new Node(10);
   
   head -> next = temp1;
   temp1 -> next = temp2;
   
   printListRecursive(head);
   return 0;
}
