#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
/*
    Tree -> it is a non linear, hierarchial data structure consiting of nodes connected by edges.
    Binary Tree -> a tree is a binary tree when every node has at most two children

    Terminologies --->
        1. Leaf -> a node with no children
        2. Internal Node -> a node which is not a leaf
        3. Siblings -> the children of same parent
        4. Path -> edge between parent to children ||  length = (total number of nodes in a path- 1)
        5. Ancestors and Descendents -> if there is a path from node A to node B, then A is called an Ancestor of B and B is called a descendent of A
        6. Cousins -> nodes with same ancestor
        7. Subtree -> any node of the tree, with all of its descendents is a subtree
        8. Level -> the level of the node refers to its distance from the root, the root of the tree has generally level 0
        9. Height -> the maximum level in a tree determines its height, the height of a node in a tree is the length of the longest path from that node to a leaf node
        10. Depth -> the depth of the node is the number of nodes along the path from the root to that node

    Properties of Binary Tree --->
        1. if h = height of the binary tree, then
            a -> maximum number of leaves = 2^h 
            b -> maximum number of nodes = 2^(h+1)-1
        2. if a binary tree contains m nodes at level l, it contains at most 2m nodes at level l+1
        3. since a binary tree can contain at most 1 node at level 0(root), it can contain at most 2^l nodes at level l
        4. the total number of edges in a full binary tree with n nodes is n-1 edges

    Types --->
        1. Full binary tree -> a tree of height h has all its leaves at level h, means all non leaf nodes of a full binary tree has two children, and the leaf node have no children
        2. Complete binary tree -> all levels are filled except the last level, the last level should be filled from left to right
        3. Skew binary tree -> tilted to any one side only -> left skewed binary tree and right skewed binary tree
*/
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

int main(){
    Node* root=new Node(1);
    cout<<root->data;
    return 0;
}