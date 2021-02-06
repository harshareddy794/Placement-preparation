#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

Node * insert(Node *root,int x){
    if(root==NULL){
        return new Node(x);
    }else if(root->data<x){
        root->right = insert(root->right,x);
    }else{
        root->left = insert(root->left,x);
    }
    return root;
}

int main()
{   
    Node *root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(65);
    root->left->left = new Node(25);
    root->left->right = new Node(35);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    insert(root,75);
    insert(root,67);
    inorder(root);
    return 0;
}
