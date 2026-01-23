#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cout<<"size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"before insertion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"enter element to insert at end: ";
    int a;
    cin>>a;
    n++;
    arr[n-1]=a;

    cout<<"after insertion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}