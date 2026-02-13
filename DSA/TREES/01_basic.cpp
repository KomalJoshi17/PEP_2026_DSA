#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
/*
    Tree -> it is a non linear, hierarchial data structure consiting of nodes connected by edges.
    Binary Tree -> a tree is a binary tree when every node has at most two children

    Terminologies ->
    1. Leaf -> a node with no children
    2. Internal Node -> a node which is not a leaf
    3. Siblings -> the children of same parent
    4. Path -> edge between parent to children ||  length = (total number of nodes in a path- 1)
    5. Ancestors and Descendents -> if there is a path from node A to node B, then A is called an Ancestor of B and B is called a descendent of A
    6. Cousins -> nodes with same ancestor
    7. Subtree -> any node of the tree, with all of its descendents is a subtree
    8. Level -> the level of the node refers to its distance from the root, the root of the tree has generally level 0
    
*/
class Node{
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
    
    return 0;
}