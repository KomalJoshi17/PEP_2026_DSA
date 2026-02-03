// https://www.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
void spiralPrint(int arr[][4]){
    int top=0;
    int bottom=3;

    int left=0;
    int right=3;

        for(int i=left;i<=right;i++){
        cout<<arr[top][i]<<" ";
    }
    top++;

    for(int i=top;i<=bottom;i++){
        cout<<arr[i][right]<<" ";
    }
    right--;

    for(int i=right;i>=left;i--){
        cout<<arr[bottom][i]<<" ";
    }
    bottom--;

    for(int i=bottom;i>=top;i--){
        cout<<arr[i][left]<<" ";
    }
    left++;
}

int main(){
    int arr[4][4]={1,7,14,6,11,15,5,10,2,4,16,3,9,13,8,12};

    spiralPrint(arr);
    return 0;
}