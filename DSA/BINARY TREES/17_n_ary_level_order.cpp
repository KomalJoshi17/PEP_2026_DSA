// https://leetcode.com/problems/n-ary-tree-level-order-traversal/

// class Solution {
// public:
//     vector<vector<int>> levelOrder(Node* root) {
//         if(root==nullptr) return {};
//         vector<vector<int>> ans;
//         queue<Node *>q;
//         q.push(root);
        
//         while(!q.empty()){
//             int levelSize=q.size();
//             vector<int>level;
//             for(int i=0;i<levelSize;i++){
//                 Node* frontVal=q.front();
//                 level.push_back(frontVal->val);
//                 q.pop();
                
//                 for(Node* child:frontVal->children){
//                     if(child){
//                         q.push(child);
//                     }
//                 }
//             }
//             ans.push_back(level);
//         }
//         return ans;
//     }
// };