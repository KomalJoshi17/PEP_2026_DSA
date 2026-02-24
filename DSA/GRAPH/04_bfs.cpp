// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

// class Solution {
//   public:
//     vector<int> bfs(vector<vector<int>> &adj) {
//         // code here
//         int V=adj.size();
//         vector<int>ans;
//         vector<bool> visited(V,false);
//         queue<int>q;
        
//         q.push(0);
//         visited[0]=true;
        
//         while(!q.empty()){
//             int frontVal=q.front();
//             q.pop();
            
//             ans.push_back(frontVal);
            
//             for(auto neighbour:adj[frontVal]){
//                 if(!visited[neighbour]){
//                     q.push(neighbour);
//                     visited[neighbour]=true;
//                 }
//             }
//         }
//         return ans;
//     }
// };