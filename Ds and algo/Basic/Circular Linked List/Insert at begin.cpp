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
    cout<<endl;
}

Node *insertBegin(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        head = temp;
        temp->next = temp;
        return head;
    }else{
        Node *curr = head;
        while(curr->next!=head){
            curr = curr->next;
        }
        temp->next = head;
        head = temp;
        curr->next = head;
        return head;
    }
}

int main()
{   
    Node *head = insertBegin(head,2);
    head = insertBegin(head,5);
    head = insertBegin(head,10);
    head = insertBegin(head,12);
    head = insertBegin(head,15);
    printList(head);
}
