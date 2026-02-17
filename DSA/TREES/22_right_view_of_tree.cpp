// https://leetcode.com/problems/binary-tree-right-side-view/

// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         if(root==nullptr) return {};
//         vector<int> ans;
//         queue<TreeNode *>q;
//         q.push(root);
        
//         while(!q.empty()){
//             int levelSize=q.size();
//             for(int i=0;i<levelSize;i++){
//                 TreeNode* frontVal=q.front();
//                 q.pop();

//                 if(i==levelSize-1) ans.push_back(frontVal->val);

//                 if(frontVal->left){
//                     q.push(frontVal->left);
//                 }
//                 if(frontVal->right){
//                     q.push(frontVal->right);
//                 }
//             }
//         }
//         return ans;
//     }
// };