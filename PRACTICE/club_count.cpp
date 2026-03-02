/* 
Linked list node definition
struct Node {
    public:
        int val;
        Node* next;
        Node(): val(0), next(nullptr) {}
        Node(int data): val(data), next(nullptr) {}
        Node(int data, Node* nextPtr): val(data), next(nextPtr){}
};
*/

int getClubCount(Node* head) {
    // add your code here
    Node* temp=head;
    int count=0;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    return count;
}