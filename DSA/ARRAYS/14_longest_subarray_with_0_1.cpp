// https://www.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1

// class Solution {
//   public:
//     int maxLen(vector<int> &arr) {
//         unordered_map<int,int> mp; 
//         int sum = 0;
//         int maxx = 0;
        
//         mp[0] = -1;
        
//         for(int i = 0; i < arr.size(); i++){
//             if(arr[i] == 0) sum += -1;
//             else sum += 1;
            
//             if(mp.find(sum) != mp.end()){
//                 maxx = max(maxx, i - mp[sum]);
//             }
//             else{
//                 mp[sum] = i; 
//             }
//         }
//         return maxx;
//     }
// };