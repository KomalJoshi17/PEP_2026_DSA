#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int func(int base, int power){
    if(power==0) return 1;

    return base*func(base,power-1);
}
int main(){
    cout<<func(2,3);
    return 0;
}