#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int parition(int arr[],int start,int end){
    // find pivot element -> first element
    int pivot=arr[start];

    // counting how many elements are less than pivot
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    // after counting, we got to know about the right place of pivot, now we will create a pivot index at that position
    int pivotIndex=start+count;
    swap(arr[pivotIndex],arr[start]);

    // now we will handle the right and left part in which all the elements should be less and greater respectively
    int i=start;
    int j=end;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        swap(arr[i++],arr[j--]);
    }

    return pivotIndex;
}

void quickSort(int arr[],int start,int end){
    if(start>=end) return;

    int pivotIndex=parition(arr,start,end);

    quickSort(arr,start,pivotIndex-1);
    quickSort(arr,pivotIndex+1,end);
}

int main(){
    int arr[7]={7,23,875,7098,672,81,44};
    quickSort(arr,0,6);

    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}