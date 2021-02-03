#include <iostream>
#include <bits/stdc++.h>
#include<algorithm> 

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

int getMax(Node *root){
    if(root==NULL){
        return INT_MIN;
    }else{
        return max(root->data, max(getMax(root->left), getMax(root->right)));
    }
}

int main()
{
   Node *root = new Node(10);
   root->left = new Node(20);
   root->right = new Node(30);
   root->left->left = new Node(40);
   cout<<"Maximum element: "<<getMax(root);
   return 0;
}
