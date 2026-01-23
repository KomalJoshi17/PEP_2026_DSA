#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

int linearSearch(int arr[],int key){
    // find the key in the array using linear search, if key is found and value of key>5, then return the double of key otherisw retrun the half of the key
    bool found=false;
    int index;
    for(int i=0;i<8;i++){
        if(arr[i]==key){
            found=true;
            index=i;
            break;
        }
        else{
            found=false;
        }
    }

    if(!found){
        cout<<"not found ";
        return -1;
    }

    cout<<"found ";
    if(key>5){
        cout<<"double "<<key*2;
    }else{
        cout<<"half "<<key/2;
    }
    cout<<endl<<"at index ";
    return index;
}

int main(){
    int arr[8]={2,7,5,4,10,12,8,3};

    cout<<"enter element to search: "; 
    int key;
    cin>>key;

    cout<<linearSearch(arr,key);
    return 0;
}

