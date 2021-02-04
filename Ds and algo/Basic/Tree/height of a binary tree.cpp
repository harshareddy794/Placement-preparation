#include <iostream>
#include<algorithm>

using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

int getHeight(Node *root){
    if(root==NULL){
        return 0;
    }else{
        return max(getHeight(root->left),getHeight(root->right))+1;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(15);
    root->right = new Node(18);
    root->left->left = new Node(20);
    root->left->left->left = new Node(25);
    cout<<getHeight(root);
   return 0;
}
