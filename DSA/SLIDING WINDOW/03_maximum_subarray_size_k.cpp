// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

// class Solution {
//   public:
//     int maxSubarraySum(vector<int>& arr, int k) {
//         // code here
//         // int maxSum=0;
//         // int n=arr.size();
//         // for(int i=0;i<=n-k;i++){
//         //     int sum=0;
//         //     for(int j=0;j<k;j++){
//         //         sum+=arr[i+j];
//         //     }
//         //     maxSum=max(sum,maxSum);
//         // }
//         // return maxSum;
        
//         int currSum=0;
//         int maxSum=0;
//         int n=arr.size();
//         for(int i=0;i<k;i++){
//             currSum+=arr[i];
//         }
        
//         maxSum=max(maxSum,currSum);
        
//         for(int i=k;i<n;i++){
//             currSum=currSum-arr[i-k]+arr[i];
//             if(currSum>maxSum){
//                 maxSum=currSum;
//             }
//         }
        
//         return maxSum;
//     }
// };

// class Solution{
//     public:
//     int maxSubarraySum(vector<int>& arr, int k) {
//     int n = arr.size();
//     int maxSum = 0;

//     // check all subarrays of size k
//     for (int i = 0; i <= n - k; i++) {
//         int currSum = 0;

//         // compute sum of current subarray
//         for (int j = 0; j < k; j++) {
//             currSum += arr[i + j];
//         }

//         // update maximum sum
//         maxSum = max(maxSum, currSum);
//     }

//     return maxSum;
//     }
// };