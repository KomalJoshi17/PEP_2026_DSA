#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
bool sorted(int arr[],int size){
    if(size==0 || size==1) return true;

    if(arr[0]>arr[1]) return false;

    return sorted(arr+1,size-1);
}

int main(){
    int arr[5]={2,3,23,544,6777};

    cout<<sorted(arr,5);
    return 0;
}