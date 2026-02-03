#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    // decalared data members
    public:
    int data;
    Node* next;

    // constructors used to intialise the data members
    Node(int val){
        data=val;
        next=NULL; // we dont want the pointer to go as hangling
    }
};

int main(){
    Node* head=new Node(1);
    Node* newNode=new Node(2);
    head->next=newNode;

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}