// https://leetcode.com/problems/implement-stack-using-queues/

// class MyStack {
// public:
//     queue<int>q1,q2;

//     MyStack() {
        
//     }
    
//     void push(int x) {
//         // 1. enqueue in q2
//         q2.push(x);

//         // 2. take all elements from q1, pop them and push in q2;
//         while(!q1.empty()){
//             q2.push(q1.front());
//             q1.pop();
//         }

//         // 3. swap q1 and q2
//         swap(q1,q2);
//     }
    
//     int pop() {
//         int topVal=q1.front();
//         q1.pop();
//         return topVal;
//     }
    
//     int top() {
//         return q1.front();
//     }
    
//     bool empty() {
//         if(q1.empty()) return true;
//         return false;
//     }
// };

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */