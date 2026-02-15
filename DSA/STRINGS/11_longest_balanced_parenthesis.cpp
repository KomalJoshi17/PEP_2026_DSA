// https://leetcode.com/problems/longest-balanced-substring-ii/description/

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int longestBalanced(string s) {
//         int ans = 0;

//         // 1 character substrings
//         ans = max(ans, longestSingle(s));

//         // 2 character balanced substrings
//         ans = max(ans, longestTwo(s, 'a', 'b'));
//         ans = max(ans, longestTwo(s, 'a', 'c'));
//         ans = max(ans, longestTwo(s, 'b', 'c'));

//         // 3 character balanced substrings
//         ans = max(ans, longestThree(s));

//         return ans;
//     }

//     // Longest run of single character
//     int longestSingle(const string &s) {
//         int maxLen = 0;
//         int i = 0, n = s.size();

//         while (i < n) {
//             int j = i;
//             while (j < n && s[j] == s[i]) j++;
//             maxLen = max(maxLen, j - i);
//             i = j;
//         }
//         return maxLen;
//     }

//     // Balanced substring of two characters
//     int longestTwo(const string &s, char x, char y) {
//         int res = 0;
//         int n = s.size();
//         int i = 0;

//         while (i < n) {
//             while (i < n && s[i] != x && s[i] != y) i++;

//             unordered_map<int,int> pos;
//             pos[0] = i - 1;
//             int diff = 0;

//             while (i < n && (s[i] == x || s[i] == y)) {
//                 diff += (s[i] == x ? 1 : -1);

//                 if (pos.count(diff))
//                     res = max(res, i - pos[diff]);
//                 else
//                     pos[diff] = i;

//                 i++;
//             }
//         }
//         return res;
//     }

//     // Balanced substring of three characters
//     int longestThree(const string &s) {
//         unordered_map<long long, int> firstSeen;

//         int countA = 0, countB = 0, countC = 0;
//         int ans = 0;

//         firstSeen[0] = -1; // base case

//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] == 'a') countA++;
//             else if (s[i] == 'b') countB++;
//             else countC++;

//             int d1 = countA - countB;
//             int d2 = countA - countC;

//             long long key = ((long long)d1 << 32) ^ (d2 & 0xffffffff);

//             if (firstSeen.count(key))
//                 ans = max(ans, i - firstSeen[key]);
//             else
//                 firstSeen[key] = i;
//         }

//         return ans;
//     }
// };