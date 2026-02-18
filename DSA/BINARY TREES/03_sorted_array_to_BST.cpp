// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

// class Solution {
// public:
//     TreeNode* helper(vector<int>&nums,int start, int end){
//         if(start>end) return nullptr;
//         // find mid element
//         int mid=(start+end)/2;
//         // make nums[mid] the curr node
//         TreeNode* newNode=new TreeNode(nums[mid]);
//         // recursively build LST -> nums[start]....nums[mid-1]
//         newNode->left=helper(nums,start,mid-1);
//         // recursively build RST -> nums[mid+1]....nums[end]
//         newNode->right=helper(nums,mid+1,end);

//         return newNode;
//     }
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         int start=0;
//         int end=nums.size()-1;
//         TreeNode* tree=helper(nums,start,end);
//         return tree;
//     }
// };