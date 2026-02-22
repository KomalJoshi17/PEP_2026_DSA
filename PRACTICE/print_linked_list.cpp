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

void printList(Node* head) {
    // add your code here
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data;
        if(temp->next!=nullptr){
            cout<<" ";
        }
        temp=temp->next;
    }
}