// https://www.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

// class Solution {
//   public:
//     vector<int>array;
//     vector<int> sorted(Node* root){
//         if(root==nullptr) return {};
//         sorted(root->left);
//         array.push_back(root->data);
//         sorted(root->right);
//         return array;
//     }
    
//     int kthLargest(Node *root, int k) {
//         // Your code here
//         vector<int> array=sorted(root);
//         return array[array.size()-k];
//     }
// };