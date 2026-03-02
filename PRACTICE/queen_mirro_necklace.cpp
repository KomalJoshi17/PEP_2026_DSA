/*  
   Definition for singly-linked list node:
   
struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(NULL) {}
};

*/

Node* getMiddle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node* reverse(Node* head){
    Node* prev=nullptr;
    Node* curr=head;

    while(curr!=nullptr){
       Node* newNext=curr->next;
        curr->next=prev;
        prev=curr;
        curr=newNext;
    }
    return prev;
}
bool isMirrorNecklace(Node* head) {
    // add your code here
    if(head==nullptr || head->next==nullptr) return true;

    Node* temp=getMiddle(head);
    Node* temp2=reverse(temp);
    Node* normal=head;
    while(temp2!=nullptr){
        if(temp2->val!=normal->val){
            return false;
        }
        temp2=temp2->next;
        normal=normal->next;
    }
    return true;
}