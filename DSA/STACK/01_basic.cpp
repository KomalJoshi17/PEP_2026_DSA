#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    // cout<<st.top()<<endl;

    // st.pop();
    // cout<<st.top()<<endl;

    // cout<<st.size();

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    // for(int i=st.size();i>0;i--){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    return 0;
}