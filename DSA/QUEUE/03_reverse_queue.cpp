// https://www.geeksforgeeks.org/problems/queue-reversal/1

// class Solution {
//   public:
//     void reverseQueue(queue<int> &q) {
//         // code here
//         // stack<int>st;
//         // while(!q.empty()){
//         //     st.push(q.front());
//         //     q.pop();
//         // }
        
//         // while(!st.empty()){
//         //     q.push(st.top());
//         //     st.pop();
//         // }
        
//         if(q.empty()) return;
        
//         int temp=q.front();
//         q.pop();
        
//         // recursive call
//         reverseQueue(q);
//         q.push(temp);
//     }
// };