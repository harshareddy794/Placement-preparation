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

Node *getSucc(Node *curr){
    curr = curr->right;
    while(curr!=NULL && curr->left!=NULL){
        curr =  curr->left;
    }
    return curr;
}

Node * deleteNode(Node *root,int x){
    if(root==NULL){
        return root;
    }
    if(root->data>x){
        root->left = deleteNode(root->left,x);
    }else if(root->data<x){
        root->right = deleteNode(root->right,x);
    }
    else{
        if(root->left==NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }else{
            Node *succ = getSucc(root);
            root->data = succ->data;
            root->right = deleteNode(root->right,succ->data);
        }
        return root;
    }
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
    inorder(root);
    deleteNode(root,25);
    cout<<endl;
    inorder(root);
    return 0;
}
