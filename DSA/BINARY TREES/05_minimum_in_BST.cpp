// https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1

// class Solution {
//   public:
//     int minValue(Node* root) {
//         // code here
//         if(root->left==nullptr) return root->data;
        
//         minValue(root->left);
//     }
// };