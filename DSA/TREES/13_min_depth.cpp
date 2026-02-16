// https://leetcode.com/problems/minimum-depth-of-binary-tree/description/

// class Solution {
// public:
//     int minDepth(TreeNode* root) {
//         if(root==nullptr){
//             return 0;
//         } 
//         int mindepth=0;
//         int depth1=minDepth(root->left);
//         int depth2=minDepth(root->right);
//         mindepth=min(depth1,depth2);
//         if(depth1==0){
//             mindepth=depth2;
//         }else if(depth2==0){
//             mindepth=depth1;
//         }
//         return 1+mindepth; 
//     }
// };