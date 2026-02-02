#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int maxRow(int arr[][3],int row,int col){
    int sum=0;
    int maxSum=0;
    int idx1=0;
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
            if(sum>maxSum){
                maxSum=sum;
                idx1=j;
            }
        }
        cout<<sum<<" ";
        sum=0;
    }
    cout<<endl;
    return idx1;
}

int main(){
    int arr[3][3]={16,2,5 ,1,7,8 ,4,8,3};

    cout<<maxRow(arr,3,3);
    return 0;
}