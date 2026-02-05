// https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1

// /*
// class Node {
//   public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = nullptr;
//     }
// };
// */
// class Solution {
//   public:
//     void removeLoop(Node* head) {
//         // code here
//         if(head==nullptr) return;
        
//         Node* slow=head;
//         Node* fast=head;
        
//         while(fast!=nullptr && fast->next!=nullptr){
//             slow=slow->next;
//             fast=fast->next->next;
            
//             if(slow==fast){
//                 slow=head;
                
//                 if(slow==fast){
//                     while(fast->next!=slow){
//                         fast=fast->next;
//                     }
//                     fast->next=nullptr;
//                     return;
//                 }
                
//                 while(slow!=fast->next){
//                     slow=slow->next;
//                     fast=fast->next;
//                 }
                
//                 fast->next=nullptr;
//                 return;
//             }
//         }
//     }
// };

// class Solution {
//   public:
//     void removeLoop(Node* head) {
//         if (head == nullptr) return;

//         Node* slow = head;
//         Node* fast = head;

//         // Detect loop
//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) {
//                 break;
//             }
//         }

//         // No loop
//         if (slow != fast) return;

//         // Find node just before loop start
//         slow = head;
//         while (slow->next != fast->next) {
//             slow = slow->next;
//             fast = fast->next;
//         }

//         // Remove loop
//         fast->next = nullptr;
//     }
// };
