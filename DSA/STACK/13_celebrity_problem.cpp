// https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

// class Solution {
//   public:
//     int celebrity(vector<vector<int>>& mat) {
//         // code here
//         stack<int>st;
        
//         // push all persons in stack
//         int n=mat.size();
//         for(int i=0;i<n;i++){
//             st.push(i);
//         }
        
//         // find a potential celebrity
//         while(st.size()>1){
//             int A=st.top();
//             st.pop();
//             int B=st.top();
//             st.pop();
            
//             // if A knows B then A cannot be a celebrity
//             if(mat[A][B]==1) st.push(B);
//             else st.push(A);
//         }
        
//         int potentialCandidate=st.top();
//         for(int i=0;i<n;i++){
//             if(potentialCandidate==i) continue; // diagonal avoidance
//             if(mat[potentialCandidate][i]==1) return -1;
//             if(mat[i][potentialCandidate]==0) return -1;
//         }
        
//         return potentialCandidate;
//     }
// };