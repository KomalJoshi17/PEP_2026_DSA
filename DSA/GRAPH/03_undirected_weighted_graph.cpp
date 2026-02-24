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

    unordered_map<int, list<pair<int,int>>>adjList;

    for(int i=0;i<m;i++){
        int u,v,w;
        cout<<"from ";
        cin>>u;
        cout<<" to ";
        cin>>v;
        cout<<" weight ";
        cin>>w;
        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w}); // only if the graph is undirected
    }

    cout<<"adjacency list: "<<endl;
    for(auto i:adjList){
        cout<<i.first<<" -> ";
        for(auto j:i.second){
            cout<<j.first<<":"<<j.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}