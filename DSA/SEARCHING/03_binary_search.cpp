#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int binarySearch(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[9]={2,4,5,7,8,10,12,15,20};
    int key;
    cin>>key;
    
    cout<<binarySearch(arr,key,9);
    return 0;
}