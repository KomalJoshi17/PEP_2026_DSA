// https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1

// class Solution {
//   public:
//     vector<int> removeDuplicates(vector<int> &nums) {
//         // code here
//         int n=1;
//         vector<int>arr;
//         arr.push_back(nums[0]);
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]!=nums[i-1]){
//                 arr.push_back(nums[i]);
//                 n++;
//             } 
//         }
//         return arr;
//     }
// };