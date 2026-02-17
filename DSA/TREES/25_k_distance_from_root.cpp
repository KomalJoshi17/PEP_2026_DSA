// https://www.geeksforgeeks.org/problems/k-distance-from-root/1

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// class Solution {
//   public:
//     // function should print the nodes at k distance from root
//     vector<int> Kdistance(Node *root, int k) {
//         // Your code here
//         if(root==nullptr) return {};
//         queue<Node *>q;
//         q.push(root);
//         int levelNum=0;
//         while(!q.empty()){
//             int levelSize=q.size();
//             vector<int>level;
//             for(int i=0;i<levelSize;i++){
//                 Node* frontVal=q.front();
//                 level.push_back(frontVal->data);
//                 q.pop();
//                 if(frontVal->left){
//                     q.push(frontVal->left);
//                 }
//                 if(frontVal->right){
//                     q.push(frontVal->right);
//                 }
//             }
//             if(levelNum==k){
//                return level;
//             }
//             levelNum++;
//         }
//         return {};
//     }
// };