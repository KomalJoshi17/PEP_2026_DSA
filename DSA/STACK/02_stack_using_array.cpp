#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
class myStack{
    public:
    int* arr;
    int top;
    int size;

    myStack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    
    void push(int val){
        if(size-1==top){
            cout<<"stack overflow";
            return;
        }

        top++;
        arr[top]=val;
    }

    void pop(){
        if(top==-1){
            cout<<"stack underflow";
            return;
        }
        top--;
    }

    int peek(){
        if(top==-1){
            cout<<"no element left";
            return 0;
        }
        return arr[top];
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }

    bool isFull(){
        if(top==size-1){
            return true;
        }

        return false;
    }
};

int main(){
    myStack st(5);
    st.push(1);
    st.push(11);
    st.push(111);
    st.push(1111);
    st.push(11111);
 
    cout<<st.isEmpty();
    return 0;
}