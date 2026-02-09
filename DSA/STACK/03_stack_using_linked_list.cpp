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

class myStack{
    public:
    Node* top;

    myStack(){
        top=NULL;
    }

    void push(int val){
        Node* node=new Node(val);
        node->next=top;
        top=node;
    }

    void pop(){
        if(top==NULL){
            cout<<"stack underflow";
            return;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
    }

    int peek(){
        if(top==NULL){
            cout<<"no element left";
            return 0;
        }
        return top->data;
    }

    bool isEmpty(){
        if(top==NULL){
            return true;
        }
        return false;
    }
};

int main(){
    myStack st;
    st.push(5);
    cout<<st.peek()<<endl;
    cout<<st.isEmpty()<<endl;
    return 0;
}