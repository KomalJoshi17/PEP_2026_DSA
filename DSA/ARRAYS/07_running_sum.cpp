// https://leetcode.com/problems/running-sum-of-1d-array/submissions/1894075309/

// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         // vector<int>arr;

//         // int sum=0;
//         // for(int i=0;i<nums.size();i++){
//         //     arr.push_back(nums[i]+sum);
//         //     sum+=nums[i];
//         // }
//         // return arr;

//         for(int i=1;i<nums.size();i++){
//             nums[i]=nums[i]+nums[i-1];
//         }
//         return nums;
//     }
// };