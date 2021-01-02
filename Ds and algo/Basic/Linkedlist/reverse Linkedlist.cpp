#include <iostream>
#include <vector>

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
    cout<<endl;
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
// Naive and using vectors
Node *revLinkedListNaive(Node *head){
    vector<int> arr;
    Node *curr =head;
    while(curr->next!=NULL){
    arr.push_back(curr->data);
    curr = curr->next;
    }
    for(curr=head;curr->next!=NULL;curr=curr->next){
        curr->data = arr.back();
        arr.pop_back();
    }
    return head;
}

//  Efficient solution
Node *revLinkedList(Node *head){
    if(head==NULL){
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    while(curr!=NULL){
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main()
{   
    Node *head =NULL;
    head = insertAtPosition(head,10,1);
    head = insertAtPosition(head,20,2);
    head = insertAtPosition(head,30,3);
    head = insertAtPosition(head,40,4);
    head = insertAtPosition(head,45,2);
    head = insertAtPosition(head,50,1);
    printList(head);
    head = revLinkedList(head);
    printList(head);
    head= revLinkedListNaive(head);
    printList(head);
    return 0;
}
