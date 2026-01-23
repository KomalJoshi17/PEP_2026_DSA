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
    cout<<"enter element to insert at begin: ";
    int a;
    cin>>a;

    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=a;

    cout<<"after insertion: ";
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}