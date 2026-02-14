// https://leetcode.com/problems/count-complete-tree-nodes/description/
// https://www.geeksforgeeks.org/problems/count-number-of-nodes-in-a-binary-tree/0

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
//     int countNodes(TreeNode* root) {
//         int count=1;
//         if(root==nullptr) return 0;

//         count+=countNodes(root->left);
//         count+=countNodes(root->right);

//         return count;
//     }
// };