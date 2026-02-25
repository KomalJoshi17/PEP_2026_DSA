// https://www.geeksforgeeks.org/problems/topological-sort/1

// class Solution {
//   public:
//     vector<int> topoSort(int V, vector<vector<int>>& edges) {
//         // code here
//         // compute indegree of every node
        
//         // push all the nodes with the indegree=0 in the queue
//         // remove nodes one by one from queue, and add them to answer
//         // for each removed node, decrease the indegree of its neighbours by 1
//         // if any neighbour becomes indegree == 0, push that in queue
        
//         // number of visited nodes != number of vertices -> cycle exist

//         vector<vector<int>>adj(V);
//         for(auto &e:edges){
//             int u=e[0];
//             int v=e[1];
//             adj[u].push_back(v);
//         }
        
//         // create a indegree vector
//         vector<int>indegree(V,0);
//         for(int i=0;i<adj.size();i++){
//             for(auto &node:adj[i]){
//                 indegree[node]++;
//             }
//         }
        
//         queue<int>q;
//         vector<int>ans;
        
//         // push all the vertices with indegree 0 in the queue 
//         for(int i=0;i<V;i++){
//             if(indegree[i]==0){
//                 q.push(i);
//             }
//         }
        
//         while(!q.empty()){
//             int node=q.front();
//             q.pop();
            
//             ans.push_back(node);
//             for(auto neighbour:adj[node]){
//                 indegree[neighbour]--;
                
//                 if(indegree[neighbour]==0){
//                     q.push(neighbour);
//                 }
//             }
//         }
        
//         // if cycle comes
//         if(ans.size()!=V){
//             return {};
//         }
        
//         return ans;
//     }
// };