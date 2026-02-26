class MyCircularDeque {
public:
    vector<int>arr;
    int front;
    int rear;
    int size;
    int capacity;

    MyCircularDeque(int k) {
        // add your code here
        capacity=k;
        arr.resize(k);
        front=0;
        rear=-1;
        size=0;
    }

    bool insertFront(int value) {
        // add your code here
        if(isFull()) return false;

        front=(front-1+capacity)%capacity;
        arr[front]=value;
        size++;
        if(size==1) rear=front;
        return true;
    }

    bool insertLast(int value) {
        // add your code here
        if(isFull()) return false;
        rear=(rear+1)%capacity;
        arr[rear]=value;
        size++;
        return true;
    }

    bool deleteFront() {
        // add your code here
        if(isEmpty()) return false;

        front=(front+1)%capacity;
        size--;
        return true;
    }

    bool deleteLast() {
        // add your code here
        if(isEmpty()) return false;

        rear=(rear-1+capacity)%capacity;
        size--;
        return true;
    }

    int getFront() {
        // add your code here
        if(isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        // add your code here
        if(isEmpty()) return -1;
        return arr[rear];
    }

    bool isEmpty() {
        // add your code here
        return size==0;
    }

    bool isFull() {
        // add your code here
        return size==capacity;
    }
};

