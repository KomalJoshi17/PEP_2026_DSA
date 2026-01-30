// https://leetcode.com/problems/reverse-words-in-a-string/description/

// class Solution {
// public:
//     string reverseWords(string s) {
//         string word;
//         vector<string>words;

//         for(int i=0;i<s.size();i++){
//             if(s[i]!=' '){
//                 word+=s[i];
//             }else if(!word.empty()){
//                 words.push_back(word);
//                 word = "";
//             }
//         }

//         if(!word.empty()){
//             words.push_back(word);
//         }

//         reverse(words.begin(),words.end());

//         string ans;
//         for(int i=0;i<words.size();i++){
//             ans+=words[i];
//             if(i!=words.size()-1){
//                 ans+=" ";
//             }
//         }

//         return ans;
//     }
// };