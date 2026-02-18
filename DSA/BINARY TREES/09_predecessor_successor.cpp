// https://www.geeksforgeeks.org/problems/predecessor-and-successor/1

// predecessor -> the node with the largest value < key
// successor -> the node with the smallest value > key
// class Solution {
//   public:
    
//     vector<Node*> findPreSuc(Node* curr, int key) {
//         if(curr==nullptr) return {nullptr, nullptr};
        
//         Node* pre=nullptr;
//         Node* suc=nullptr;
        
//         while(curr!=nullptr){
//             if(curr->data==key){
//                 if(curr->left){
//                     Node* temp=curr->left;
//                     while(temp->right){
//                         temp=temp->right;
//                     }
//                     pre=temp;
//                 }
                
//                 if(curr->right){
//                     Node* temp=curr->right;
//                     while(temp->left){
//                         temp=temp->left;
//                     }
//                     suc=temp;
//                 }
//                 break;
//             }
//             else if(curr->data>key){
//                 suc=curr;
//                 curr=curr->left;
//             }
//             else{
//                 pre=curr;
//                 curr=curr->right;
//             }
//         }
//         return {pre, suc};
//     }


// void inorder(Node* root, vector<Node*> &ans){
//     if(root==NULL) return;
    
//     inorder(root->left, ans);
//     ans.push_back(root);
//     inorder(root->right, ans);
// }

// vector<Node*> findPreSuc(Node* root, int key) {
//     vector<Node*> ans;
//     inorder(root, ans);
    
//     Node* start = NULL;
//     Node* end = NULL;
    
//     for(int i = 0; i < ans.size(); i++){
//         if(ans[i]->data < key)
//             start = ans[i];
        
//         if(ans[i]->data > key){
//             end = ans[i];
//             break;
//         }
//     }
    
//     return {start, end};
// }

// };