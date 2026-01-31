// https://www.geeksforgeeks.org/problems/merge-sort/1

// class Solution {
//   public:
  
//     void Merge(vector<int>& arr, int beg, int mid, int end){
//         vector<int> temp(end - beg + 1);
//         int i = beg, j = mid + 1, k = 0;

//         while (i <= mid && j <= end) {
//             if (arr[i] < arr[j]) {
//                 temp[k++] = arr[i++];
//             } else {
//                 temp[k++] = arr[j++];
//             }
//         }

//         while (i <= mid) {
//             temp[k++] = arr[i++];
//         }

//         while (j <= end) {
//             temp[k++] = arr[j++];
//         }

//         for (int i = beg; i <= end; i++) {
//             arr[i] = temp[i - beg];
//         }
//     }

//     void mergeSort(vector<int>& arr, int beg, int end) {
//         if (beg < end) {
//             int mid = beg + (end - beg) / 2;
//             mergeSort(arr, beg, mid);
//             mergeSort(arr, mid + 1, end);
//             Merge(arr, beg, mid, end);
//         }
//     }
// };