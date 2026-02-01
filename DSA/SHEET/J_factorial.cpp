// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
   
long long factorial(int n){
    if(n==1 || n==0) return 1;
 
    return n*factorial(n-1);
}
 
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}