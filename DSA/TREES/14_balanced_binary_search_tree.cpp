// a binary search is balanced if for every node the height difference between its left and right subtree is at moost 1

// https://leetcode.com/problems/balanced-binary-tree/

// class Solution {
// public:
//     int height(TreeNode* root,bool &ans){
//         if(root==nullptr){
//             return 0;
//         }
//         int left=height(root->left,ans);
//         int right=height(root->right,ans);
        
//         if(abs(right-left)>1){
//             ans=false;
//         }
//         return 1+max(left,right);
//     }

//     bool isBalanced(TreeNode* root) {
//         bool ans=true;
//         height(root,ans);
//         return ans;
//     }
// };