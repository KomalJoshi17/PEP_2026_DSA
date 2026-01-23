// functions are of two types -> void and non-void

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
   
// void type
// void hello(){
//     cout<<"hello"<<endl;
// }

// void hello2(){
//     hello();
// }

// // void hello(){
// //     cout<<"hello"<<endl;
// // } it will give the error because series of declartion and calling matters in cpp

// int main(){
//     hello2();
//     return 0;
// }

// non-void type
// int add

// PARAMETERS

int add(int a,int b){ // parameters are passed (that are declared)
    return a+b;
}

float subtract(float a,float b){
    return a-b;
}

int main(){
    cout<<add(5,10); // passed as arguments (that are called)


    cout<<endl;
    cout<<subtract(5.5,1.2);
    return 0;
}