// https://leetcode.com/problems/even-odd-tree/description/

// class Solution {
// public:
//     bool isEvenOddTree(TreeNode* root) {
//         if(root==nullptr) return true;

//         queue<TreeNode *>q;
//         q.push(root);
//         int levelNum=0;
//         while(!q.empty()){
//             int preVal;
//             if(levelNum%2==0){
//                 preVal=INT_MIN;
//             }else{
//                 preVal=INT_MAX;
//             }
//             int levelSize=q.size();
//             for(int i=0;i<levelSize;i++){
//                 TreeNode* frontVal=q.front();
//                 q.pop();
//                 if(levelNum%2==0){
//                     if(frontVal->val%2==0 || preVal >= frontVal->val){
//                         return false;
//                     }
//                 }else{
//                     if(frontVal->val%2==1 || preVal <= frontVal->val){
//                         return false;
//                     }
//                 }
//                 preVal=frontVal->val;

//                 if(frontVal->left){
//                     q.push(frontVal->left);
//                 }
//                 if(frontVal->right){
//                     q.push(frontVal->right);
//                 }
//             }
//             levelNum++;
//         }
//         return true;
//     }
// };