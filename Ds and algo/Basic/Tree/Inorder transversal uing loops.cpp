#include <iostream>
#include<algorithm>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void iterativeTransversal(Node *root){
    stack<Node *> s;
    Node *curr = root;
    while(curr!=NULL || s.empty()==false){
        while(curr!=NULL){
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(15);
    root->right = new Node(18);
    root->left->left = new Node(20);
    root->left->left->left = new Node(25);
    iterativeTransversal(root);
   return 0;
}
