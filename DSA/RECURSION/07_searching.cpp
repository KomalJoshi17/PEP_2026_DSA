#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool found(int arr[], int size, int key){
    // if(size==0) return 0;

    // if(arr[0]==key) return 1;

    // return found(arr+1,size-1,key);

    if(size<=0) return false;
    int mid=size/2;

    if(arr[mid]==key){
        return true;
    }else if(arr[mid]>key){
        return found(arr,mid,key);
    }else{
        return found(arr+mid+1,size-mid-1,key);
    }
}

int main(){
    int arr[5]={2,4,6,8,10};
    int key=10;
    cout<<found(arr,5,key);
    return 0;
}