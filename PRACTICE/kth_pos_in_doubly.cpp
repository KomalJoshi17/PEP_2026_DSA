/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};
*/

Node* insertAtKthPosition(Node* head, int data, int k) {
    // add your code here
    Node* newNode=new Node(data);

    if(head==nullptr) return newNode;

    if(k==1){
        newNode->next=head;
        head->prev=newNode;
        return newNode;
    }

    Node* temp=head;
    int count=1;

    while(temp->next!=nullptr && count<k-1){
        temp=temp->next;
        count++;
    }

    if(temp->next==nullptr && count<k-1){
        temp->next=newNode;
        newNode->prev=temp;
        return head;
    }

    newNode->next=temp->next;
    newNode->prev=temp;

    if(temp->next!=nullptr){
        temp->next->prev=newNode;
    }

    temp->next=newNode;

    return head;
}