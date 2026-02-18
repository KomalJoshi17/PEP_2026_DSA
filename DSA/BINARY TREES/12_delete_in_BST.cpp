// https://leetcode.com/problems/delete-node-in-a-bst/

// class Solution {
// public:
//     int pred(TreeNode* root){
//         root=root->left;
//         while(root->right){    
//             root=root->right;
//         }
//         return root->val;
//     }

//     int succ(TreeNode* root){
//         root = root->right;    
//         while(root->left){       
//             root = root->left;
//         }
//         return root->val;
//     }

    /*
    step 1 -> find the node to be deleted by comparisons
    step 2 -> restructure its children while preserving BST order
        There can be 3 cases for deleting a node
            Case 1 -> No child (leaf node) -> this can be deleted directly
            Case 2 -> One Child -> replace yhe current node with its only child
            Case 3 -> Two Children -> to maintain the BST order, we can either choose inorder successor (smallest value RST) 
                    or inorder predecessor (largest value in LST) and replace with current node
    */

//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root==nullptr) return nullptr;

//         if(key > root->val){
//             root->right=deleteNode(root->right, key);
//         }else if(key < root->val){
//             root->left=deleteNode(root->left, key);
//         }else{
//             // no child
//             if(root->left==nullptr && root->right==nullptr){
//                 TreeNode* toDel=root;
//                 delete toDel;
//                 return nullptr;
//             }
//             // right child only or two children
//             else if(root->right!=nullptr){
//                 int s=succ(root);
//                 root->val=s;
//                 root->right=deleteNode(root->right,s);
//             }
//             // only left child
//             else{
//                 int p=pred(root);
//                 root->val=p;
//                 root->left=deleteNode(root->left,p);
//             }
//         }
//         return root;
//     }
// };