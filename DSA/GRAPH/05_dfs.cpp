// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

// class Solution {
//   public:
//     void helper(int node, vector<vector<int>>&adj, vector<bool>&visited,vector<int>&result){
//         visited[node]=true;
//         result.push_back(node);
        
//         for(auto neighbour:adj[node]){
//             if(!visited[neighbour]){
//                 helper(neighbour,adj,visited,result);
//             }
//         }
//     }
    
//     vector<int> dfs(vector<vector<int>>& adj) {
//         // Code here
//         int V=adj.size();
//         vector<int>ans;
//         vector<bool> visited(V,false);
//         queue<int>q;
        
//         helper(0,adj,visited,ans);
//         return ans;
//     }
// };