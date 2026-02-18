/*
    a binary search tree(BST) is a special type of tree where
        -> every node has at most two children
        -> for every node :-
            all values in LST are smaller
            all values in RST are greater
        -> both LST and RST are also BST
    
    -> inorder traversal of binary search tree is always sorted
*/

// https://leetcode.com/problems/search-in-a-binary-search-tree/

// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         if(root==nullptr) return root;

//         if(root->val==val){
//             return root;
//         }else if(root->val>val){
//             return searchBST(root->left,val);
//         }else{
//             return searchBST(root->right,val);
//         }
//     }
// };