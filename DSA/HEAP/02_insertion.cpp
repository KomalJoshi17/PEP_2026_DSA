#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
class maxHeap{
    public:
    vector<int>heap;

    // bottomUp
    void heapify(int index){
        while(index>0){
            // find parent
            int parent=(index-1)/2;

            // if curr node > parent
            if(heap[index]>heap[parent]){
                swap(heap[index],heap[parent]);
                index=parent;
            }else{
                break;
            }
        }
    }

    void insert(int value){
        heap.push_back(value);
        heapify(heap.size()-1);
    }
};

int main(){
    
    return 0;
}