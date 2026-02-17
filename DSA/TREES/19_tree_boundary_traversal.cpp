// https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

// class Solution {
//   public:
//     void traverseLeft(Node* root,vector<int> &ans){
//         if(root==nullptr || (root->left==nullptr && root->right==nullptr)){
//             return;
//         }
        
//         ans.push_back(root->data);
//         if(root->left){
//             traverseLeft(root->left,ans);
//         }else{
//             traverseLeft(root->right,ans);
//         }
        
//     }
    
//     void traverseChild(Node* root,vector<int> &ans){
//         if(root==nullptr) return;
        
//         if(root->left==nullptr && root->right==nullptr){
//             ans.push_back(root->data);
//             return;
//         }
//         traverseChild(root->left,ans);
//         traverseChild(root->right,ans);
//     }
    
//     void traverseRight(Node* root,vector<int> &ans){
//         if(root==nullptr || (root->left==nullptr && root->right==nullptr)){
//             return;
//         }
        
//         if(root->right){
//             traverseRight(root->right,ans);
//         }else{
//             traverseRight(root->left,ans);
//         }
//         ans.push_back(root->data);
//     }

//     vector<int> boundaryTraversal(Node *root) {
//         // code here
//         vector<int>ans;
//         if(root==nullptr) return ans;
        
//         ans.push_back(root->data);
        
//         traverseLeft(root->left,ans);
        
//         traverseChild(root->left,ans);
//         traverseChild(root->right,ans);
        
//         traverseRight(root->right,ans);
        
//         return ans;
//     }
// };