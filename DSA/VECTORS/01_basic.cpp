// vector -> its already their in the standard libraries of the cpp thats why we need to include it by manually adding its header file

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
    
int main(){
    vector<int> vec1={2,3,1,5,4};

    vector<char>vec2(5);

    // cout<<vec1[1];
    // cout<<vec1[6]; // garbage value
    // cout<<vec1.at(6); // will not give the garbage value, it will give the error message like we did in exception handling 
    // using it is more safer

    vec1.push_back(7);
    cout<<vec1[5];

    cout<<endl;
    vec1.pop_back();
    for(int i:vec1){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<vec1.size();

    vec1.clear();
    cout<<endl;
    cout<<vec1.size();
    return 0;
}
