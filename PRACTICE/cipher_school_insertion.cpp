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

Node* insertNode(Node* head, int data, int position) {
    // add your code here
    Node* newNode=new Node(data);

    if(position==0){
        newNode->next=head;
        head=newNode;
    }

    Node* temp=head;
    int count=1;
    while(temp!=nullptr){
        if(count==position){
            newNode->next=temp->next;
            temp->next=newNode;
        }
        temp=temp->next;
        count++;
    }
    return head;
}