// https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1

/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

// class Solution {
//   public:
//     // Should return head of the modified linked list
//     Node* sortedInsert(Node* head, int key) {
//         // Code here
//         Node* temp=head;
//         Node* node=new Node(key);
//         if(head==nullptr || key<=head->data){
//             node->next=head;
//             return node;
//         }

//         while(temp->next!=nullptr && temp->next->data<key) {
//             temp=temp->next;
//         }

//         node->next=temp->next;
//         temp->next=node;

//         return head;
//     }
// };