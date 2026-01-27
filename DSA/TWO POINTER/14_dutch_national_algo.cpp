// https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
// https://leetcode.com/problems/sort-colors/solutions/1745096/sort-colors-or-sort-an-array-of-0s-1s-and-2s/

// class Solution {
//   public:
//     void sort012(vector<int>& arr) {
//         // code here
//         int low=0;
//         int high=arr.size()-1;
        
//         int mid=0;
        
//         while(mid<=high){
//             if(arr[mid]==0){
//                 swap(arr[low],arr[mid]);
//                 low++; 
//                 mid++;
//             }else if(arr[mid]==1){
//                 mid++;
//             }else{
//                 swap(arr[mid],arr[high]);
//                 high--;
//             }
//         }
//     }
// };