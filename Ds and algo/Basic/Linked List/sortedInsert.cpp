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
}

Node *sortedInsert(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }else if(x<head->data){
        temp->next=head; 
       return  temp;
    }else{
        Node *curr = head;
        while((curr->next!=NULL)&&(curr->next->data < x)){
            curr = curr->next; 
        }
        if(curr->next==NULL){
            curr->next=temp;
            return head;
        }else{
            temp->next = curr->next;
            curr->next =  temp;
            return head;
        }
    }
}

int main()
{   Node *head =NULL;
    head = sortedInsert(head,10);
    head = sortedInsert(head,8);
    head = sortedInsert(head,30);
    head = sortedInsert(head,22);
    head = sortedInsert(head,15);
    head = sortedInsert(head,50);
    printList(head);
   return 0;
}

