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

Node *deleteHead(Node *head){
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

// Efficient solution 
Node *deleteKthNode(Node *head, int n){
    if(head==NULL){
        return NULL;
    }else if(n==1){
        return deleteHead(head);
    }else{
        Node *curr = head;
        for(int i=0;i<n-2;i++){
            curr = curr->next;
        }
        Node *temp = curr->next;
        curr->next = curr->next->next;
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
    head = deleteKthNode(head,3);
    printList(head);
}
