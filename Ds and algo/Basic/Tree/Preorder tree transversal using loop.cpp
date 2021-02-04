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

void iterativePreorderTransversal(Node *root){
    stack<Node *> s;
    s.push(root);
    while(s.empty()==false){
        Node *curr = s.top();
        cout<<curr->data<<" ";
        s.pop();
        if(curr->right!=NULL){
            s.push(curr->right);
        }
        if(curr->left!=NULL){
            s.push(curr->left);
        }
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(15);
    root->right = new Node(18);
    root->left->left = new Node(20);
    root->left->left->left = new Node(25);
    iterativePreorderTransversal(root);
   return 0;
}
