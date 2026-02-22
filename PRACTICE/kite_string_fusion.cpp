// struct ListNode {
//   int val;
//    ListNode* next;
//    ListNode(int x) : val(x), next(nullptr) {}
// };

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int k) {
    // add your code here
    ListNode* dummy=new ListNode(0);
    ListNode* temp=dummy;
    int carry=0;

    // adding two numbers
    while(l1!=nullptr || l2!=nullptr || carry){
        int sum=carry;

        if(l1){
            sum+=l1->val;
            l1=l1->next;
        }

        if(l2){
            sum+=l2->val;
            l2=l2->next;
        }

        carry=sum/10;
        int digit=sum%10;

        temp->next=new ListNode(digit);
        temp=temp->next;
    }

    // multiply each digit with k (mod 10)
    temp=dummy->next;
    while(temp!=nullptr){
        temp->val=(temp->val*k)%10;
        temp=temp->next;
    }

    ListNode* curr=dummy->next;
    return curr;
}

