// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

// class Solution {
//   public:
  
//     int firstOcc(vector<int>& nums, int target){
//         int low=0;
//         int high=nums.size()-1;

//         int first=-1;
//         while(low<=high){
//             int mid=low+(high-low)/2;

//             if(nums[mid]==target){
//                 first=mid;
//                 high=mid-1;
//             }else if(nums[mid]<target){
//                 low=mid+1;
//             }else{
//                 high=mid-1;
//             }
//         }
//         return first;
//     }
    
//     int lastOcc(vector<int>& nums, int target){
//         int low=0;
//         int high=nums.size()-1;

//         int last=-1;
//         while(low<=high){
//             int mid=low+(high-low)/2;

//             if(nums[mid]==target){
//                 last=mid;
//                 low=mid+1;
//             }else if(nums[mid]<target){
//                 low=mid+1;
//             }else{
//                 high=mid-1;
//             }
//         }
//         return last;
//     }
    
//     int countFreq(vector<int>& arr, int target) {
//         // code here
//         // int count=0;
//         // for(int i=0;i<arr.size();i++){
//         //     if(arr[i]==target){
//         //         count++;
//         //     }
//         // }
//         // return count;
        
//         int first=firstOcc(arr,target);
//         if (first==-1) return 0;

//         int last=lastOcc(arr,target);
//         return last-first + 1;
//     }
// };