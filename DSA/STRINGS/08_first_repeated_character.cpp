// https://www.geeksforgeeks.org/problems/find-first-repeated-character4108/1

// class Solution {
//   public:
//     string firstRepChar(string s) {
//         // code here.
//         vector<int> seen(26);

//         for(char c:s){
//             if(seen[c-'a']==1){
//                 return string(1,c);
//             }
//             seen[c-'a']++;
//         }
//         return "-1";
//     }
// };