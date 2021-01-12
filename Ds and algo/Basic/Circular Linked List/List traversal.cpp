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

void printList(Node *head){
    if(head==NULL){
        return;
    }else{
        Node *curr = head;
        do{
            cout<<(curr->data)<<" ";
            curr = curr->next;
        }while(curr!=head);
    }
}

int main()
{
   Node *head = new Node(5);
   Node *head1 = new Node(10);
   Node *head2 = new Node(15);
   head->next = head1;
   head1->next = head2;
   head2->next = head;
   printList(head);
}
