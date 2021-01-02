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

// Naive solution
void NthFromEndNaive(Node *head, int n){
    int length=0,i;
    Node *curr = head;
    while(curr!=NULL){
        curr = curr->next;
        length++;
    }
    if(length<n)
    {return;}
    curr = head;
    i=1;
    while(i!=length-n+1){
        curr = curr->next;
        i++;
    }
    cout<<endl;
    cout<<curr->data;
    
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
    // middleNode(head);
    NthFromEndNaive(head,3);
   return 0;
}}
