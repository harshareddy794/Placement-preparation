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
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
    cout<<"\n";
}

Node *insertEnd(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next = temp;
    return head;
}


Node *deleteBegin(Node *head){
    Node *temp = head->next;
    if(temp==NULL){
        return NULL;
    }    
    delete head;
    return temp;
}


int main()
{   Node *head =NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    printList(head);
    head = deleteBegin(head);
    printList(head);
   return 0;
}
