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

bool found1(int arr[],int size,int left,int right,int key){
    if (left> right) return false;
    
    int mid=(left+right)/2;

    if(arr[mid]==key){
        return true;
    }else if(arr[mid]>key){
        return found1(arr,size,left,mid-1,key);
    }else{
        return found1(arr,size,mid+1,right,key);
    }
}

int main(){
    int arr[5]={2,4,6,8,10};
    int key=16;
    cout<<found(arr,5,key);
    cout<<endl;
    cout<<found1(arr,5,0,4,key);
    return 0;
}