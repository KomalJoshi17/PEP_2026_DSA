// class Solution {
//   public:
//     void rearrangeQueue(queue<int> &q) {

//         stack<int> st;

//         // mid represents half of the queue
//         int mid = q.size() / 2;

//         // Step 1: Push first half of queue into stack
//         // Using < mid (not <=) to avoid extra pop
//         for(int i = 0; i < mid; i++){
//             st.push(q.front());
//             q.pop();
//         }

//         // Step 2: Push stack elements back into queue
//         // This reverses the first half
//         while(!st.empty()){
//             q.push(st.top());
//             st.pop();
//         }

//         // Step 3: Move the reversed first half to the back
//         // This restores correct relative order
//         for(int i = 0; i < mid; i++){
//             q.push(q.front());
//             q.pop();
//         }

//         // Step 4: Again push first half into stack
//         // This prepares elements for interleaving
//         for(int i = 0; i < mid; i++){
//             st.push(q.front());
//             q.pop();
//         }

//         // Step 5: Interleave stack (first half) and queue (second half)
//         while(!st.empty()){
//             // element from first half
//             q.push(st.top());
//             st.pop();

//             // element from second half
//             q.push(q.front());
//             q.pop();
//         }
//     }
// };
