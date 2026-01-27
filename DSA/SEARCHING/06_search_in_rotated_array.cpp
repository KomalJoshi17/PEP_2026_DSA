// https://leetcode.com/problems/search-in-rotated-sorted-array/description/?envType=problem-list-v2&envId=binary-search

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         // for(int i=0;i<nums.size();i++){
//         //     if(nums[i]==target){
//         //         return i;
//         //     }
//         // }
//         // return -1;

//         int pivot=-1;
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]>nums[i+1]){
//                 pivot=i;
//             }
//         }
//         if(pivot==-1) pivot=nums.size()-1;
//         int n=nums.size();
//         int low=(pivot+1)%n;
//         int high=pivot;

//         if(nums.size()==1) return target==nums[0] ? 0:-1;

//         while(low!=high){
//             if(nums[low]==target){
//                 return low;
//             }else if(nums[low]>target){
//                 high=(high+1)%n;
//             }else{
//                 low=(low+1)%n;
//             }
//         }
//         if(nums[low]==target) return low;
//         return -1;
//     }
// };