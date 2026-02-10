/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
Node* reverseList(Node* head){
    Node* prev=nullptr;
    Node* curr=head;

    while(curr!=nullptr){
        Node* nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}

Node* findMiddle(Node* head){
    Node*slow=head;
    Node*fast=head;

    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

bool isPalindrome(Node* head) {
    // add your code here
    if(head==nullptr || head->next==nullptr)
        return true;
    
    Node* mid=findMiddle(head);
    Node* secondHalf=reverseList(mid);
    Node* firstHalf=head;

    while(secondHalf!=nullptr){
        if(firstHalf->data!=secondHalf->data)
            return false;

        firstHalf=firstHalf->next;
        secondHalf=secondHalf->next;
    }
    return true;
}