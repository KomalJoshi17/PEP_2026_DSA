// https://leetcode.com/problems/valid-palindrome/description/

// class Solution {
// public:
//     bool palin(string t){
//         int low=0;
//         int high=t.size()-1;

//         while(low<high){
//             if(t[low++]!=t[high--]){
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool isPalindrome(string s) {
//         string t="";

//         for(int i=0;i<s.size();i++){
//             if(isalnum(s[i])){
//                 t+=tolower(s[i]);
//             }
//         }  
//         return palin(t);
//     }
// };