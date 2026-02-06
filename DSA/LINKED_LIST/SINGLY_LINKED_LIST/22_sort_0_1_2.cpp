// https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

// class Solution {
//   public:
//     Node* segregate(Node* head) {
//         Node* d0 = new Node(-1);
//         Node* d1 = new Node(-1);
//         Node* d2 = new Node(-1);

//         Node* t0 = d0;
//         Node* t1 = d1;
//         Node* t2 = d2;

//         Node* temp = head;
//         while (temp) {
//             Node* nxt = temp->next;
//             temp->next = nullptr;

//             if (temp->data == 0) {
//                 t0->next = temp;
//                 t0 = temp;
//             } 
//             else if (temp->data == 1) {
//                 t1->next = temp;
//                 t1 = temp;
//             } 
//             else {
//                 t2->next = temp;
//                 t2 = temp;
//             }
//             temp = nxt;
//         }

//         if (d1->next) {
//             t0->next = d1->next;
//             t1->next = d2->next;
//         } else {
//             t0->next = d2->next;
//         }

//         return d0->next;
//     }
// };



/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
// class Solution {
//   public:
//     // Function to sort a linked list of 0s, 1s and 2s.
//     Node* segregate(Node* head) {
//         Node* temp=head;
//         int count_0=0;
//         int count_1=0;
//         int count_2=0;
        
//         while(temp!=nullptr){
//             if(temp->data==0) count_0++;
//             else if(temp->data==1) count_1++;
//             else count_2++;
            
//             temp=temp->next;
//         }
        
//         temp=head;
//         while(temp!=nullptr){
//             if(count_0){
//                 temp->data=0;
//                 count_0--;
//             }else if(count_1){
//                 temp->data=1;
//                 count_1--;
//             }else{
//                 temp->data=2;
//                 count_2--;
//             }
            
//             temp=temp->next;
//         }
//         return head;
//     }
// };