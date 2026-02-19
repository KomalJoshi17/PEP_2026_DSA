#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class maxHeap{
    public:
    vector<int>heap;

    // topDown
    void heapify(int i){
        int size=heap.size();

        while(i<size){
            int left=2*i+1;
            int right=2*i+2;
            int largest=i;

            if(left<size && heap[left]>heap[largest]){
                largest=left;
            }

            if(right<size && heap[right]>heap[largest]){
                largest=right;
            }

            if(largest!=i){
                swap(heap[i],heap[largest]);
                i=largest;
            }else{
                break;
            }
        }
    }

    void deletion(){
        if(heap.empty()) return;
        swap(heap[0],heap[heap.size()-1]);
        heap.pop_back();
        heapify(0);
    }

    void insertion(int value){
        heap.push_back(value);
        heapify(0);
    }
};

int main(){
    maxHeap heap;
    heap.insertion(1);
    heap.insertion(2);
    heap.insertion(3);
    heap.insertion(4);
    heap.insertion(5);

    cout<<"heap elements: ";
    for(int i=0;i<heap.heap.size();i++){
        cout<<heap.heap[i]<<" ";
    }

    heap.deletion();

    cout<<endl<<"after deletion: ";
    for(int i=0;i<heap.heap.size();i++){
        cout<<heap.heap[i]<<" ";
    }

    return 0;
}