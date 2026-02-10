#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int prefixEval(string s){
    // create a stack
    stack<int>st;
    // traverse from right to left
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();

            switch(s[i]){
                case '+':
                st.push(op1+op2);
                break;

                case '*':
                st.push(op1*op2);
                break;

                case '-':
                st.push(op1-op2);
                break;

                case '/':
                st.push(op1/op2);
                break;

                case '^':
                st.push(pow(op1,op2));
                break;
            }
        }
    }

    return st.top();
    // if s[i] is operand -> push in the stack
    // else if it operator -> create two varaibles to store top two elements. pop them and evaluate with operator,
    // push the result back in the stack
    // return the last remaining element from the stack -> it is the answer
}

int main(){
    string s="-+7*45+20";
    cout<<prefixEval(s);
    return 0;
}