// int findSmallest(vector<int>& gems) {
//     int low = 0;
//     int high = gems.size() - 1;
//     while (low < high) {
//         int mid = low + (high - low) / 2;
//         if (gems[mid] > gems[high]) {
//             low = mid + 1;
//         } else {
//             high = mid;
//         }
//     }
//     return gems[low];
// }
