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

// Naive Solution
Node *insertEnd(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }else{
        Node *curr = head;
        while(curr->next!=head){
            curr = curr->next;
        }
        curr->next=temp;
        temp->next=head;
        return head;
    }
}

// Efficient solution 
Node *insertEndEffective(Node *head,int x){
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

int main()
{   
    Node *head = insertEnd(head,2);
    head = insertEnd(head,5);
    head = insertEnd(head,10);
    head = insertEnd(head,12);
    head = insertEnd(head,15);
    printList(head);
    head = insertEndEffective(head,20);
    printList(head);
}
