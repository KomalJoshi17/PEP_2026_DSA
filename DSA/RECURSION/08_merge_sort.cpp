#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int start,int end){
    int mid=(start+end)/2;

    // find length of left spitted array, adding one because while calculating index we subtracted 1, now to find the size we are adding 1
    int length1=mid-start+1;

    // find length of left spitted array
    int length2=end-mid;

    // creating two new arrays
    int *arr1=new int [length1];
    int *arr2=new int [length2];

    // copy values from start to mid in arr1
    int k=start;
    for(int i=0;i<length1;i++){
        arr1[i]=arr[k++];
    }

    // copy values from mid+1 to end in arr2
    k=mid+1; // or normally k++
    for(int i=0;i<length2;i++){
        arr2[i]=arr[k++];
    }

    // after the values are copied, now we sort and merge two arrays
    int i=0;
    int j=0;
    k=start;
    while(i<length1 && j<length2){
        if(arr1[i]>arr2[j]){
            arr[k++]=arr2[j++];
        }else{
            arr[k++]=arr1[i++];
        }
    }

    // need to check for remaining elements
    while(i<length1){
        arr[k++]=arr1[i++];
    }

    while(j<length2){
        arr[k++]=arr2[j++];
    }

    delete [] arr1;
    delete [] arr2;
}

void mergeSort(int arr[],int start,int end){
    if(start>=end) return;

    int mid=(start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,end);
}

int main(){
    int arr[7]={2,5,1,6,7,3,10};
    mergeSort(arr,0,6);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}