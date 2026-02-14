// https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

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
//     int maxDepth(TreeNode* root) {
//         if(root==nullptr){
//             return 0;
//         } 
//         int maxdepth=0;
//         int depth1=maxDepth(root->left);
//         int depth2=maxDepth(root->right);
//         maxdepth=max(depth1,depth2);
//         return 1+maxdepth;      
//     }
// };