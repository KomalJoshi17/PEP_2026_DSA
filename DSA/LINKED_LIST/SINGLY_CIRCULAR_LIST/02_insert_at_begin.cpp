#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtBegin(Node* &head,int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        newNode->next=head;
        return;
    }

    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    newNode->next=head;
    temp->next=newNode;
    head=newNode;
}

void print(Node* head){
    if(head==NULL) return;
    // we can also use do-while loop
    Node* curr=head;
    while(curr->next!=head){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<curr->data;
}

int main(){
    int n;
    cout<<"enter nodes: ";
    cin>>n;

    cout<<"elements in linked list: ";
    Node* head=NULL;
    while(n--){
        int val;
        cin>>val;

        insertAtBegin(head,val);
    }

    print(head);
    return 0;
}