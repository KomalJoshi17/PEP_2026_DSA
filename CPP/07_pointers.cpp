// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
   
// // pointer is also a variable but its special type of variable
// // special because its not storing the value, its stroing the address of the variable

// int main(){
//     int a=5;
//     cout<<"variable: "<<a<<endl;

//     int &ref=a;
//     // int *ptr=&a;
//     int *ptr=&ref; // type of pointer should be same as the variable datatype to which we are pointing
//     cout<<"address: "<<ptr<<" "<<&ref<<endl;

//     cout<<"value: "<<*ptr<<" "<<ref<<endl; 

//     int b=*ptr; // dereferencing of the pointer
//     cout<<b;
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // int a=10;
    // int *p=&a;

    // *p=20; // its fetching the value and hence value will get updated
    // cout<<a<<endl;

    // int x=10;
    // int &r=x;
    // // references should be intialised
    // r++;
    // cout<<x<<endl;

    int var=20;
    int *ptr=&var;
    *ptr+=1;
    // *ptr++; // increment the address

    int **ptr2=&ptr;
    cout<<var<<endl<<ptr2;

    // ptr2 address of ptr2
    // *ptr2 address of ptr
    // **ptr value of variable
    return 0;
}

// double pointer