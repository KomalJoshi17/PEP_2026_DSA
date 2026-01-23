#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // operators
    // arithmatic operators -> + - / * %
    // int a=5;
    // int b=10;

    // cout<<"addition: "<<a+b<<endl;

    // cout<<a++<<endl; // post increment
    // cout<<a<<endl; // value is increased by 1

    // cout<<++a<<endl; // first increment then return 

    // // cout<<a++ + ++b<<endl;

    // // relational operators -> < <= > >= ==(comparison operator) !=
    // cout<<(10>5)<<endl; // 1 represents true
    // cout<<(10<5)<<endl; // 0 represents false

    // cout<<(10==5)<<endl;

    // // logical operators -> && ||
    // int age2=25;
    // bool hasID=true;

    // if(age2>=18 && hasID){
    //     cout<<"true"<<endl;
    // }

    int p=50;
    int r=2;
    int t=1;

    int SI=(p*r*t)/100;
    if(SI > 50){
        cout<<"tax should be paid";
    }
    else{
        cout<<"tax should not be paid";
    }
    return 0;
}