// https://leetcode.com/problems/move-zeroes/
// https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=0){
//                 swap(nums[i],nums[j]);
//                 j++;
//             }
//         }
//     }
// };