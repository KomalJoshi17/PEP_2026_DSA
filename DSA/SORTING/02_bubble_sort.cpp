// example : throwing stone in water

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
void bubbleSort(int arr[],int size){
    bool swapped=true;
    for(int i=0;i<i<size;i++){
        swapped=false;
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }

    // for(int i=0;i<size-1;i++){
    //     for(int j=0;j<size-i-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
}

int main(){
    int arr[5]={11,5,7,2,3};

    bubbleSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}