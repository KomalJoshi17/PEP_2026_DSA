#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

void levelOrder(Node* root){
    if(root==nullptr) return;

    // first create a queue and push root and null
    queue<Node *>q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node* frontNode=q.front();
        q.pop();

        if(frontNode!=nullptr){
            cout<<frontNode->data<<" ";

            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
        }else if(!q.empty()){
            q.push(nullptr);
        }
    }
}

int main(){
    //      5
    //     / \
    //   12   13
    //   /  \    \
    //  7    14   2
    // / \  /  \  / \
    //17 23 27 3  8  11

    Node* root = new Node(5);
    root->left = new Node(12);
    root->right = new Node(13);

    root->left->left = new Node(7);
    root->left->right = new Node(14);

    root->right->right = new Node(2);

    root->left->left->left = new Node(17);
    root->left->left->right = new Node(23);

    root->left->right->left = new Node(27);
    root->left->right->right = new Node(3);

    root->right->right->left = new Node(8);
    root->right->right->right = new Node(11);

    levelOrder(root);
    return 0;
}