// head recursion
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
 
// void print(int n){
//     if(n==0) return;

//     print(n-1);
//     cout<<n<<" ";
// }

// int main(){
//     print(10);
//     return 0;
// }


// tail recursion
// #include<bits/stdc++.h>
// using namespace std;
 
// void print(int n){
//     if(n==0) return;

//     cout<<n<<" ";
//     print(n-1);
// }

// int main(){
//     print(10);
//     return 0;
// }

// all the even numbers
#include<bits/stdc++.h>
using namespace std;
 
void print(int n){
    if(n==0) return;

    print(n-1);
    if(n%2==0){
        cout<<n<<" ";
    }
}

int main(){
    print(13);
    return 0;
}