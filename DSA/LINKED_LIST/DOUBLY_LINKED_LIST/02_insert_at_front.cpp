#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data=val;
        next=NULL; 
        prev=NULL;
    }
};

void insertAtFront(Node* &head, int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        return;
    }

    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

int main(){
    int n;
    cout<<"enter nodes: ";
    cin>>n;

    cout<<"elements in linked list: ";
    Node* head=NULL;
    int val;
    while(n--){
        cin>>val;

        insertAtFront(head,val);
    }

    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}