// https://www.naukri.com/code360/problems/shortest-path-in-an-unweighted-graph_981297

#include<unordered_map>
#include <bits/stdc++.h>
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	// Write your code here

	unordered_map<int, list<int>>adj;
	for(auto e:edges){
		int u=e.first;
		int v=e.second;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	unordered_map<int, bool>visited;
	unordered_map<int, int>parent;
	queue<int>q;

	q.push(s);
	parent[s]=-1;
	visited[s]=true;

	while(!q.empty()){
		int frontNode=q.front();
		q.pop();

		for(auto neighbours:adj[frontNode]){
			if(!visited[neighbours]){
				visited[neighbours]=true;
				parent[neighbours]=frontNode;
				q.push(neighbours);
			}
		}
	}

	vector<int>ans;
	int currNode=t;
	ans.push_back(t);

	while(currNode!=s){
		currNode=parent[currNode];
		ans.push_back(currNode);
	}

	reverse(ans.begin(),ans.end());
	return ans;
}
