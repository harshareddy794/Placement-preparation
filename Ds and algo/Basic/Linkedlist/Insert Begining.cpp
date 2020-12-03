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

Node *insertBegining(Node *head, int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

void printList( Node *head ){
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next; 
    }
}


int main()
{
    Node *head = NULL;
    head = insertBegining(head,5);
    head = insertBegining(head,10);
    head = insertBegining(head,15);
    printList(head);
    return 0;
}

