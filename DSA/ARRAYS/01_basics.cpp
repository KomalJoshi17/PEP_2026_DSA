// array is linear data structure
// array is homogenous data structure

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // int arr2[5];
    // cout<<arr2[2]; // garbage value

    // cout<<endl;
    // int arr3[5]={1,4,5,6};
    // cout<<arr3[4]<<" "; // zero

    int n;
    cin>>n;

    int arr[n]; // sometimes its not good enough to use because it will use stack memory but if user give large size of n then your compiler will throw an erro, so best practise is to use heap memory

    // traversal
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // cout<<"array: ";
    // for(int i=0;i<n;i++){
    //     cout<<i<<"-"<<arr[i]<<endl;
    // }

    // cout<<endl;

    // cout<<"print array in reverse: ";
    // for(int i=n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }

    for(int i:arr){
        cout<<i*2<<" ";
    }
    return 0;
}