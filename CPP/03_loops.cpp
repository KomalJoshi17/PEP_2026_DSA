#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){

    int i=0; // global 
    // for(int i=0;i<10;i++){ // local 
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<i<<endl;

    // both i in this code have different scopes
    // if i do int i=5 in line 8 then loop, then it will give me the error of redefinition of i error

    // for(int i=0;i<3;i++){ 
    //     for(int j=0;j<3;j++){
    //         cout<<i<<" - "<<j<<endl;
    //     }
    // }
    // OUTER loop for one time then INNER loop for n times
    // then again and again until termination conditions are reached


    // while loop
    // int j=0;
    // while(j<10){
    //     cout<<j<<" ";
    // } // infinite loop because termination condition is missing


    // int j=0;
    // while (j<10){
    //    cout<<j<<" ";
    //    j++;
    // }


    // do while loop
    // int i=1;
    // do{
    //     cout<<i<<" ";
    //     i++;
    // }while(i<10);


    int pin=1234;
    int enteredCode;

    while(enteredCode!=pin){
        cout<<"Enter pin: ";
        cin>>enteredCode;

    }
    cout<<"Access granted"; // while loop will run until the termination condition is reached
    return 0;
}