// https://www.geeksforgeeks.org/problems/pair-sum-in-a-sorted-and-rotated-array/1

// // User function Template for C++

// class Solution {
//   public:
//     bool pairInSortedRotated(vector<int>& arr, int target) {
//         // code here
        
//         // sort(arr.begin(),arr.end());
//         // for(int i=0;i<arr.size();i++){
//         //     for(int j=i+1;j<arr.size();j++){
//         //         if(arr[i]+arr[j]==target){
//         //             return true;
//         //         }
//         //     }
//         // }
//         // return false;
//     }
// };

// class Solution {
//   public:
//     bool pairInSortedRotated(vector<int>& arr, int target) {

//         int n = arr.size();
//         int pivot = -1;

//         for (int i = 0; i < n - 1; i++) {
//             if (arr[i] > arr[i + 1]) {
//                 pivot = i;
//                 break;
//             }
//         }
        
//         if(pivot == -1) pivot = n-1;

//         int right = pivot;
//         int left = (pivot + 1) % n;

//         while (left != right) {
//             int sum = arr[left] + arr[right];

//             if (sum == target) return true;
//             else if (sum < target)
//                 left = (left + 1) % n;          
//             else
//                 right = (right - 1 + n) % n;  
//         }

//         return false;
//     }
// };
