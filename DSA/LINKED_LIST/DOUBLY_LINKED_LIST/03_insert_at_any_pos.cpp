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

void insertAtPos(Node* &head,int val,int pos){
    Node* newNode=new Node(val);

    if(pos==1){
        insertAtFront(head,val);
        return;
    }
    
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==pos-1){
            temp->next=newNode;
            newNode->prev=temp;
            temp=newNode;
        }
        temp=temp->next;
    }
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

        insertAtFront(head,val);
    }

    int pos;
    cin>>pos;

    int val;
    cin>>val;
    insertAtPos(head,val,pos);
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}