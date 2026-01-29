// https://leetcode.com/problems/is-subsequence/description/

// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         int n=s.size();
//         int m=t.size();

//         if(n>m) return false;

//         int i=0;
//         int j=0;

//         while(i<n && j<m){
//             if(s[i]==t[j]){
//                 i++;
//             }
//             j++;
//         }

//         return i==n;
//     }
// };