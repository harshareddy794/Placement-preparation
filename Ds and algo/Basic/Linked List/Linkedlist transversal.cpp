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

void printList( Node *head ){
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next; 
    }
}


int main()
{
   Node *head = new Node(5);
   Node *temp1 = new Node(7);
   Node *temp2 = new Node(10);
   
   head -> next = temp1;
   temp1 -> next = temp2;
   
   printList(head);
   return 0;
}
