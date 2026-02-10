#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
string reverseWord(string word){
    string ans="";
    for(int i=word.size()-1;i>=0;i--){
        ans+=word[i];
    }
    return ans;
}

string reverseString(string s){
    stack<string>st;
    string word="";
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            word+=s[i];
        }else {
            if(!word.empty()){
                st.push(reverseWord(word));
                word="";
            }
        }
    }

    if(!word.empty()){
        st.push(reverseWord(word));
    }

    while(!st.empty()){
        ans+=st.top();
        st.pop();
        if(!st.empty()) ans+=" ";
    }

    return ans;
}

int main(){
    string str="Hello how are you?";
    cout<<reverseString(str);
    return 0;
}