// https://www.geeksforgeeks.org/problems/k-largest-elements4206/1

// class Solution {
//   public:
//     vector<int> kLargest(vector<int>& nums, int k) {
//         // Your code here
//         priority_queue<int, vector<int>,greater<int>>pq_min;
//         vector<int>ans;
//         for(int i=0;i<nums.size();i++){
//             pq_min.push(nums[i]);
//             if(pq_min.size()>k){
//                 pq_min.pop();
//             }
//         }
        
//         while(!pq_min.empty()){
//             ans.push_back(pq_min.top());
//             pq_min.pop();
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };