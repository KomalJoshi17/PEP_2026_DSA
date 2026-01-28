// https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/description/

// class Solution {
// public:
//     int minSwaps(vector<int>& nums) {
//         int n=nums.size();
//         int count1=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==1){
//                 count1++;
//             }
//         }

//         if(count1==0) return 0;
        
//         int curr=0;
//         int maxOnes=0;
//         for(int i=0;i<count1;i++){
//             if(nums[i]==1){
//                 curr++;
//             }
//             maxOnes=curr;
//         }

//         for(int i=count1;i<nums.size()+count1;i++){
//             // curr-=(nums[(i-count1)]%n);
//             // curr+=nums[(i)%n];
//             // maxOnes=max(maxOnes,curr);

//             // remove outgoing element
//             if (nums[(i - count1) % n] == 1) curr--;

//             // add incoming element
//             if (nums[i % n] == 1) curr++;

//             maxOnes = max(maxOnes, curr);
//         }

//         return count1-maxOnes;
//     }
// };

// class Solution {
// public:
//     int minSwaps(vector<int>& nums) {
//         int n = nums.size();

//         int count1 = 0;
//         for (int i = 0; i < n; i++) {
//             if (nums[i] == 1) count1++;
//         }

//         if (count1 == 0) return 0;

//         int minn = INT_MAX;

//         // check all circular windows
//         for (int i = 0; i < n; i++) {
//             int swap = 0;
//             for (int j = 0; j < count1; j++) {
//                 if (nums[(i + j) % n] == 0) {
//                     swap++;
//                 }
//             }
//             minn = min(minn, swap);
//         }

//         return minn;
//     }
// };
