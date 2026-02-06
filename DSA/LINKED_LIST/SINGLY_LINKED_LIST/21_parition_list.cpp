// https://leetcode.com/problems/partition-list/description/

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
//     ListNode* partition(ListNode* head, int x) {
//     ListNode* small=NULL;
//     ListNode* greater=NULL;

//     ListNode* node1=NULL;
//     ListNode* node2=NULL;

//     ListNode* temp=head;
//       while(temp!=nullptr){
//         ListNode* save=temp->next;
//         temp->next=nullptr;
        
//         if(temp->val<x){
//             if(small==NULL){
//                 small=node1=temp;
//             }else{
//                 small->next=temp;
//                 small=temp;
//             }
//         }else{
//             if(greater==NULL){
//                 greater=node2=temp;
//             }else{
//                 greater->next=temp;
//                 greater=temp;
//             }
//         }
//         temp=save;
//     } 
//     if(node1==nullptr) return node2;
//     small->next=node2;
//     return node1;
//     }
// };