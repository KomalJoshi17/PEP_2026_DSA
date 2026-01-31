#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
bool found(int arr[4][4],int key){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[4][4]={
        {1,7,14,6},
        {11,15,5,10},
        {2,4,16,3},
        {9,13,8,12}
    };

    int key=9;

    cout<<found(arr,key);
    return 0;
}