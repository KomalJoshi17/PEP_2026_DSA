// https://leetcode.com/problems/all-elements-in-two-binary-search-trees/description/

// class Solution {
// public:
//     void inorder(TreeNode* root, vector<int>&arr){
//         if(root==nullptr) return;

//         inorder(root->left,arr);
//         arr.push_back(root->val);
//         inorder(root->right,arr);
//     }

//     vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
//         vector<int> arr1;
//         inorder(root1,arr1);
//         vector<int> arr2;
//         inorder(root2,arr2);

//         vector<int>ans;
//         for(int i=0;i<arr1.size();i++){
//             ans.push_back(arr1[i]);
//         }

//         for(int i=0;i<arr2.size();i++){
//             ans.push_back(arr2[i]);
//         }

//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };