// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
long long nthFibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return nthFibonacci(n-1)+nthFibonacci(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<nthFibonacci(n-1);
    return 0;
}