// https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     long long kthLargestLevelSum(TreeNode* root, int k) {
//         if(root==nullptr) return -1;
//         vector<long long> ans;
//         queue<TreeNode *>q;
//         q.push(root);
        
//         while(!q.empty()){
//             int levelSize=q.size();
//             long long sum=0;
//             for(int i=0;i<levelSize;i++){
//                 TreeNode* frontVal=q.front();
//                 sum+=frontVal->val;
//                 q.pop();
                
//                 if(frontVal->left){
//                     q.push(frontVal->left);
//                 }
//                 if(frontVal->right){
//                     q.push(frontVal->right);
//                 }
//             }
//             ans.push_back(sum);
//         }
//         if(k>ans.size()) return -1;
//         sort(ans.begin(),ans.end());
//         return ans[ans.size()-k];
//     }
// };