// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/

// class Solution {
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         if(root==nullptr) return {};
//         vector<vector<int>> ans;

//         // outer map for horizontal distance ( automatically sorts the hd -> left to right)
//         // inner map for levels( sort level -> top to bottom )
//         map<int, map<int,multiset<int>>>nodes;

//         // each element in queue stores -> TreeNode* -> curr node, int (hd), int (depth)
//         queue<pair<TreeNode *, pair<int, int>>>q;
//         q.push(make_pair(root,make_pair(0,0)));

//         while(!q.empty()){
//             pair<TreeNode*, pair<int,int>> temp=q.front();
//             q.pop();

//             TreeNode* frontVal=temp.first;
//             int hd=temp.second.first;
//             int lvl=temp.second.second;

//             nodes[hd][lvl].insert(frontVal->val);

//             // if left exist -> hd -1 and lvl +1
//             if(frontVal->left){
//                 q.push(make_pair(frontVal->left,make_pair(hd-1,lvl+1)));
//             }

//             // if right exist -> hd +1 and lvl +1
//             if(frontVal->right){
//                 q.push(make_pair(frontVal->right,make_pair(hd+1,lvl+1)));
//             }
//         }

//         for(auto &p:nodes){
//             vector<int>col;
//             for(auto &lvl:p.second){
//                 // col.insert(col.end(),lvl.second.begin(), lvl.second.end());
//                 for(auto values:lvl.second){
//                     col.push_back(values);
//                 }
//             }
//             ans.push_back(col);
//         }
//         return ans;
//     }
// };