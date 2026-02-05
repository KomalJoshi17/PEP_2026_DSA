// https://leetcode.com/problems/intersection-of-two-linked-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:

//     int findLength(ListNode* head){
//         int length=0;
//         ListNode* temp=head;

//         while(temp!=nullptr){
//             length++;
//             temp=temp->next;
//         }
//         return length;
//     }

//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         // O(n^2)
//         // while(headB!=nullptr){
//         //     ListNode* temp=headA;
//         //     while(temp!=nullptr){
//         //         if(temp==headB){
//         //             return headB;
//         //         }
//         //         temp=temp->next;
//         //     }
//         //     headB=headB->next;
//         // }
//         // return nullptr;

//         // ListNode* ptrA=headA;
//         // ListNode* ptrB=headB;

//         // int lA=findLength(headA);
//         // int lB=findLength(headB);

//         // int diff=abs(lB-lA);
//         // if(lB>lA){
//         //     while(diff--){
//         //         ptrB=ptrB->next;
//         //     }
//         // }else{
//         //     while(diff--){
//         //         ptrA=ptrA->next;
//         //     }
//         // }

//         // while(ptrA!=ptrB){
//         //     ptrA=ptrA->next;
//         //     ptrB=ptrB->next;
//         // }

//         // return ptrB;

//         ListNode* pA=headA;
//         ListNode* pB=headB;

//         while(pA!=pB){
//             if(pA==nullptr){
//                 pA=headB;
//             }else{
//                 pA=pA->next;
//             }

//             if(pB==nullptr){
//                 pB=headA;
//             }else{
//                 pB=pB->next;
//             }
//         }
//         return pA;
//     }
// };