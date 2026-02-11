// https://www.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1

// class Solution {
//   public:
//     int precedence(char c) {
//         if(c == '^'){
//             return 3;
//         }else if (c == '/' || c == '*'){
//             return 2;
//         }else if (c == '+' || c == '-'){
//             return 1;
//         }else{
//             return -1;
//         }
//     }
    
//     string infixToPostfix(string& s) {
//         // code here
        
//         // 1 operand -> append in ans
//         // 2 ( -> push in stack
//         // 3 ) -> pop from stack to ans until (
//         // 4 operator -> pop while the top of stack has greater or equal precedence, then push
        
//         string ans="";
//         stack<char>st;
//         for(int i=0;i<s.size();i++){
//             if(isalnum(s[i])){
//                 ans+=s[i];
//             }
            
//             else if(s[i]=='('){
//                 st.push(s[i]);
//             }
            
//             else if(s[i]==')'){
//                 while(!st.empty() && st.top()!='('){
//                     ans+=st.top();
//                     st.pop();
//                 }
//                 st.pop();
//             }
            
//             else{
//                 while(!st.empty() && precedence(st.top())>=precedence(s[i])
//                 && !(s[i]=='^' && st.top()=='^')){
//                     ans+=st.top();
//                     st.pop();
//                 }
//                 st.push(s[i]);
//             }
//         }
        
//         while(!st.empty()){
//             ans+=st.top();
//             st.pop();
//         }
        
//         return ans;
//     }
// };
