// https://leetcode.com/problems/next-greater-node-in-linked-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     vector<int> nextLargerNodes(ListNode* head) {
//         if(head==NULL) return {};
//         if(head->next==NULL) return {0};

//         vector<int>ans;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             int maxx=0;
//             ListNode* curr=temp->next;
//             while(curr!=NULL){
//                 if(curr->val > temp->val){
//                     maxx=curr->val;
//                     break;
//                 }
//                 curr=curr->next;
//             }
//             ans.push_back(maxx);
//             temp=temp->next;
//         }
//         return ans;
//     }
// };