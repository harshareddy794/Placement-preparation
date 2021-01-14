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

Node *insertEnd(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }else{
        temp->next = head->next;
        head->next = temp;
        int t = temp->data;
        temp->data = head->data;
        head->data = t;
        return temp;
    }
}

// Naive Solution
Node *deleteHead(Node *head){
    if(head==NULL){
        return NULL;
    }else if(head->next==head){
        delete(head);
        return NULL;
    }else{
        Node *curr = head;
        while(curr->next!=head){
            curr = curr->next;
        }
        curr->next = head->next;
        delete(head);
        return curr->next;
    }
}

// Efficient solution 
Node *deleteHeadEfficient(Node *head){
    if(head==NULL){
        return NULL;
    }else if(head->next==head){
        delete(head);
        return NULL;
    }else{
        head->data = head->next->data;
        Node *temp = head->next;
        head->next = head->next->next;
        delete(temp);
        return head;
    }
}

int main()
{   
    Node *head = insertEnd(head,2);
    head = insertEnd(head,5);
    head = insertEnd(head,10);
    head = insertEnd(head,12);
    head = insertEnd(head,15);
    head = insertEnd(head,20);
    printList(head);
    head = deleteHead(head);
    printList(head);
    head = deleteHeadEfficient(head);
    printList(head);
}
