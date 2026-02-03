#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // int arr[3][4]={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };

    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}; same 

    int arr[2][3];
    // taking input row wise
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }

    // taking input column wise
    for(int j=0;j<3;j++)
        for(int i=0;i<2;i++){
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}