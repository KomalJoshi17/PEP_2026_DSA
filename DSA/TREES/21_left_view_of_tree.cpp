// https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1

// class Solution {
//   public:
//     vector<int> leftView(Node *root) {
//         // code here
//         if(root==nullptr) return {};
//         vector<int> ans;
//         queue<Node *>q;
//         q.push(root);
        
//         while(!q.empty()){
//             int levelSize=q.size();
//             for(int i=0;i<levelSize;i++){
//                 Node* frontVal=q.front();
//                 q.pop();

//                 if(i==0) ans.push_back(frontVal->data);

//                 if(frontVal->left){
//                     q.push(frontVal->left);
//                 }
//                 if(frontVal->right){
//                     q.push(frontVal->right);
//                 }
//             }
//         }
//         return ans;
//     }
// };
