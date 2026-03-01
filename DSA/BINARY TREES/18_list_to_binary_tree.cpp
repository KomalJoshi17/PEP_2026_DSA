// https://www.geeksforgeeks.org/problems/sorted-list-to-bst/1

/*
struct LNode { //Linked List
    int data;
    struct LNode* next;
    LNode(int x){
        data = x;
        next = NULL; }
};
struct TNode {   //Tree
    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x){
        data=x;
        left=right=NULL; }
}; */
class Solution {
  public:
  
    LNode* findMid(LNode* head) {
        LNode* slow = head;
        LNode* fast = head;
        LNode* prev = NULL;
        
        while(fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(prev) prev->next = NULL;  // break left half
        
        return slow;
    }
  
    TNode *sortedListToBST(LNode *head) {
        if(head == NULL) return NULL;
        
        if(head->next == NULL)
            return new TNode(head->data);
        
        LNode* mid = findMid(head);
        
        TNode* root = new TNode(mid->data);
        
        if(head != mid)
            root->left = sortedListToBST(head);
        
        root->right = sortedListToBST(mid->next);
        
        return root;
    }
};