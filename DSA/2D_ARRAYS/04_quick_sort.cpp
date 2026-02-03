// https://www.geeksforgeeks.org/problems/quick-sort/1

// class Solution {
//   public:
//     // Function to sort an array using quick sort algorithm.
//     void quickSort(vector<int>& arr, int low, int high) {
//         // code here
//         if (low < high) {
//         int pi = partition(arr, low, high);
  
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
//     }

//   public:
//     // Function that takes last element as pivot, places the pivot element at
//     // its correct position in sorted array, and places all smaller elements
//     // to left of pivot and all greater elements to right of pivot.
//     int partition(vector<int>& arr, int low, int high) {
//         int pivot = arr[high];
//     int i = (low - 1);
  
//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return (i + 1);
//         // code here
//     }
// };