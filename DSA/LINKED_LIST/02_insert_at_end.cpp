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

void insertAtEnd(Node* &head,int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        return;
    };

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
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

        insertAtEnd(head,val);
    }

    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}