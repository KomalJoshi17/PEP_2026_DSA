#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
class myQueue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    myQueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    
    void enqueue(int val){
        if(rear==size-1){
            cout<<"queue overflow";
            return;
        }

        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear]=val;
    }

    void dequeue(){
        if(front==-1 || front>rear){
            cout<<"queue underflow";
            return;
        }
        front++;
    }

    int getFront(){
        if(front==-1 || front>rear){
            cout<<"no element";
            return 0;
        }
        return arr[front];
    }

    bool isFull(){
        if(rear==size-1){
            return true;
        }
        return false;
    }

    bool isEmpty(){
        if(front==-1 || front>rear){
            return true;
        }
        return false;
    }
};

int main(){
    myQueue qu(3);
    qu.enqueue(1);
    qu.enqueue(12);
    qu.enqueue(123);
    cout<<qu.getFront()<<endl;
    cout<<qu.isEmpty()<<endl;
    cout<<qu.isFull()<<endl;
    return 0;
}