#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n; // number of vertices
    int m; // number of edges
    
    cout<<"enter the number of vertices: ";
    cin>>n;

    cout<<"enter the number of edges: ";
    cin>>m;

    unordered_map<int, list<int>>adjList;

    for(int i=0;i<m;i++){
        int u,v;
        cout<<"from ";
        cin>>u;
        cout<<" to ";
        cin>>v;

        adjList[u].push_back(v);
        adjList[v].push_back(u); // only if the graph is undirected
    }

    cout<<"adjacency list: "<<endl;
    for(auto i:adjList){
        cout<<i.first<<" -> ";
        for(auto j:i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}