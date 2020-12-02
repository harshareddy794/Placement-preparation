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

int search(Node *head, int x){
    int count = 0;
    while(head!=NULL){
        count++;
        if((head->data)==x){
            return count;
            
        }
        head = head -> next;
        
    }
    return -1;
}


int main()
{
    Node *head = new Node(5);
    Node *temp1 = new Node(7);
    Node *temp2 = new Node(10);
    Node *temp3 = new Node(12);
    Node *temp4 = new Node(15);
       
    head -> next = temp1;
    temp1 -> next = temp2;
    temp2 -> next = temp3;
    temp3 -> next = temp4;
    
    
  cout<<search(head ,10);
   return 0;
}
