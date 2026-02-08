// bool binarySearch(vector<int>&ids,int target){
//     int low=0;
//     int high=ids.size()-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;

//         if(ids[mid]==target){
//             return true;
//         }else if(ids[mid]>target){
//             high=mid-1;
//         }else{
//             low=mid+1;
//         }
//     }
//     return false;
// }

// int findGrimoire(vector<int>& ids, int target) {
//     // add your code here
//     if(binarySearch(ids,target)){
//         return 1;
//     }else{
//         return 0;
//     }
// }