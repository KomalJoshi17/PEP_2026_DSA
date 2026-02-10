// https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1

// class Solution {
//   public:
//     void insert(stack<int>&s,int val,int count,int size){
//         if(s.empty() || count==size){
//             s.push(val);
//             return;
//         }
        
//         int temp=s.top();
//         s.pop();
//         insert(s,val,count+1,size);
//         s.push(temp);
//     }
    
//     stack<int> insertAtBottom(stack<int> st, int x) {
//         int count=0;
//         insert(st,x,count,st.size());
//         return st;
//     }
// };