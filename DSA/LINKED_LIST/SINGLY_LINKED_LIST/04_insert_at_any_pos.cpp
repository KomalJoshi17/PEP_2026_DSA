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

void insertAtPos(Node* &head,int val,int pos){
    Node* newNode=new Node(val);

    if(pos==1){
        newNode->next=head;
        head=newNode;
        return;
    }

    Node* temp=head;
    int count=1;
    while(temp!=NULL){
        if(count==pos-1){
            newNode->next=temp->next;
            temp->next=newNode;
            return;
        }
        temp=temp->next;
        count++;
    }
}

void insertAtFront(Node* &head,int val){
    Node* newNode=new Node(val);
    
    newNode->next=head;
    head=newNode;
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
    int val;
    cin>>pos;
    cin>>val;

    insertAtPos(head,val,pos);

    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}