#include<iostream>
#include<bits/stdc++.h>
using namespace std;
   
int func(int arr[],int size){
    if(size==0) return 0;

    int sum=arr[0];

    return sum+func(arr+1,size-1);   
}

int main(){
    int arr[5]={2,4,6,8,10};
    cout<<func(arr,5);
    return 0;
}