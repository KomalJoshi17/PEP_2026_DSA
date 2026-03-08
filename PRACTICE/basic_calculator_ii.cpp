class Solution {
public:
    int calculate(string s) {
        stack<long long> st;
        long long num = 0;
        char op = '+';   // previous operator
        
        for (int i = 0; i < s.length(); i++) {
            
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            
            // If operator OR end of string
            if ((!isdigit(s[i]) && s[i] != ' ') || i == s.length() - 1) {
                
                if (op == '+') {
                    st.push(num);
                }
                else if (op == '-') {
                    st.push(-num);
                }
                else if (op == '*') {
                    long long top = st.top(); st.pop();
                    st.push(top * num);
                }
                else if (op == '/') {
                    long long top = st.top(); st.pop();
                    st.push(top / num);   // truncates toward 0 in C++
                }
                
                op = s[i];
                num = 0;
            }
        }
        
        long long result = 0;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        
        return result;
    }
};