// c-style string in c
// and in c there's always a null character which tells the compiler that now the group of characters is over

// in cpp there is string libraray, i dont have to create char array and thers is no need of null character
// in this libraray there is inbuilt function of size which will tell me where the string ends.

// string methods
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // char arr[5]={'h','e','l','l','o'};
    // string str="hello";

    // string str1="hello " +  to_string(30+50) + " students";
    // cout<<str1<<endl;

    // string s1="hello";
    // string s2="hello";

    // if(s1==s2){
    //     cout<<"true"<<endl;
    // }else{
    //     cout<<"false"<<endl;
    // }

    // cout<<s1.compare(s2);

    string str={"hello world"};
    // for(int i=str.size();i>=0;i--){
    //     cout<<str[i];
    // }

    // cout<<endl;

    // for(int i=str.size()-1;i>=0;i--){
    //     cout<<str[i];
    // }

    // cout<<endl;

    int low=0;
    int high=str.size()-1;
    while(low<high){
        swap(str[low],str[high]);
        low++;
        high--;
    }

    cout<<str<<endl;

    return 0;
}