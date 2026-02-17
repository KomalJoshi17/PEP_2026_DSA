// https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/

// class Solution {
// public:
//     vector<vector<int>> levelOrderBottom(TreeNode* root) {
//         if(root==nullptr) return {};
//         vector<vector<int>> ans;
//         queue<TreeNode *>q;
//         q.push(root);
        
//         while(!q.empty()){
//             int levelSize=q.size();
//             vector<int>level;
//             for(int i=0;i<levelSize;i++){
//                 TreeNode* frontVal=q.front();
//                 level.push_back(frontVal->val);
//                 q.pop();
                
//                 if(frontVal->left){
//                     q.push(frontVal->left);
//                 }
//                 if(frontVal->right){
//                     q.push(frontVal->right);
//                 }
//             }
//             ans.push_back(level);
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };