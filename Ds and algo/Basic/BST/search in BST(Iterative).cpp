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

bool search(Node *root,int x){
    while(root!=NULL){
        if(root->data==x){
            return true;
        }else{
            if(root->data<x){
                root = root->right;
            }
            else{
                root = root->left;
            }
        }
    }
    return false;
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
    cout<<search(root,20);
    return 0;
}
