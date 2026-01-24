// https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

// class Solution {
//   public:
//     bool hasTripletSum(vector<int> &arr, int target) {
        
//         // Code Here
//         // for(int i=0;i<arr.size();i++){
//         //     for(int j=i+1;j<arr.size();j++){
//         //         for(int k=j+1;k<arr.size();k++){
//         //             if(arr[i]+arr[j]+arr[k]==target){
//         //                 return true;
//         //             }
//         //         }
//         //     }
//         // }
//         // return false;
        
//         // Your Code Here
//         sort(arr.begin(),arr.end());
//         int n=arr.size();
//         for(int i=0;i<n-2;i++){
//             int left=i+1;
//             int right=n-1;
            
//             int req=target-arr[i];
//             while(left<right){
//                 if(req==arr[left]+arr[right]){
//                     return true;
//                 }else if(req>arr[left]+arr[right]){
//                     left++;
//                 }else{
//                     right--;
//                 }
//             }
//         }
//         return false;
//     }
// };