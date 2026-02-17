// https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1

// class Solution {
//   public:
    
//     vector<int> topView(Node *root) {
//         // code here
//         vector<int>result;
//         if(root==nullptr) return result;
        
//         // we will create a map to stor first node at each horizontal distance
//         // key -> horizontal distance
//         // value -> node->val
//         map<int,int>topNode;
        
//         // create a queue to store a pair of node and horizontal distance
//         queue<pair<Node*, int>> q;
        
//         // start with root at horizontal distance -> 0
//         q.push(make_pair(root,0));
        
//         while(!q.empty()){
//            // extract the front pair
//            pair<Node* ,int> frontVal=q.front();
//            q.pop();
           
//            Node* node=frontVal.first;
//            int hd=frontVal.second;
           
//            if(topNode.find(hd)==topNode.end()){
//                topNode[hd]=node->data;
//            }
           
//            if(node->left){
//                q.push(make_pair(node->left,hd-1));
//            }
           
//            if(node->right){
//                q.push(make_pair(node->right,hd+1));
//            }
//         }
        
//         for(auto &it:topNode){
//             result.push_back(it.second);
//         }
        
//         return result;
//     }
// };
