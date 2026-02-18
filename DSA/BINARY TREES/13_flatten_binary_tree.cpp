// https://www.geeksforgeeks.org/problems/flatten-bst-to-sorted-list--111950/1
// https://leetcode.com/problems/flatten-binary-tree-to-linked-list/description/

// class Solution {
// public:
//     TreeNode* prev=nullptr;

//     void helper(TreeNode* root){
//         if(root==nullptr) return;

//         TreeNode* leftChild=root->left;
//         TreeNode* rightChild=root->right;

//         if(prev!=nullptr){
//             prev->left=nullptr;
//             prev->right=root;
//         }

//         prev=root;

//         helper(leftChild);
//         helper(rightChild);
//     }

//     void flatten(TreeNode* root) {
//         prev=nullptr;
//         helper(root);
//     }
// };