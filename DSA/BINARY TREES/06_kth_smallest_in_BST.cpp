// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

// class Solution {
// public:
//     vector<int>array;
//     vector<int> sorted(TreeNode* root){
//         if(root==nullptr) return {};
//         sorted(root->left);
//         array.push_back(root->val);
//         sorted(root->right);
//         return array;
//     }

//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> array=sorted(root);
//         return array[k-1];
//     }
// };