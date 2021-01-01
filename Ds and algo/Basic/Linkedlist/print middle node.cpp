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

Node *insertAtPosition(Node *head, int x,int position){
    Node *temp = new Node(x);
    if(position==1){
        temp->next=head;
        return temp;
    }else{
        int count = 1;
        Node *curr = head;
        while((count<position-1)&&(curr->next!=NULL)){
            count++;
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
        return head;
    }
}

// Eficient solution
void middleNode(Node *head){
    Node *curr = head;
    Node *slow = head;
    Node *fast = head;
    while((fast!=NULL)&&(fast->next!=NULL)){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<endl;
    cout<<slow->data;
}



int main()
{   Node *head =NULL;
    head = insertAtPosition(head,10,1);
    head = insertAtPosition(head,20,2);
    head = insertAtPosition(head,30,3);
    head = insertAtPosition(head,40,4);
    head = insertAtPosition(head,45,2);
    head = insertAtPosition(head,50,1);
    printList(head);
    middleNode(head);
   return 0;
}
