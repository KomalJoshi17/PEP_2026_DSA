// https://www.geeksforgeeks.org/problems/common-elements1132/1

// class Solution {
//   public:
//     // Function to find common elements in three arrays.
//     vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
//                                vector<int> &arr3) {
//         // Code Here
//         vector<int>ans;
//         int s1=arr1.size();
//         int s2=arr2.size();
//         int s3=arr3.size();
        
//         int i=0;
//         int j=0;
//         int k=0;
//         while(i<s1 && j<s2 && k<s3){
//             if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
                
//                 // if(ans.empty() || ans.back()!=arr1[i]){
//                 //     ans.push_back(arr1[i]);
//                 // }
//                 ans.push_back(arr1[i]);
//                 i++;
//                 j++;
//                 k++;
//             }
//             else if(arr1[i]<arr2[j]){
//                 i++;
//             }
//             else if(arr2[j]<arr3[k]){
//                 j++;
//             }
//             else{
//                 k++;
//             }
            
//         }
        
//         vector<int>answer;
//         if(ans.size()==0) return answer;
        
//         answer.push_back(ans[0]);
//         for(int i=1;i<ans.size();i++){
//             if(ans[i]!=ans[i-1]){
//                 answer.push_back(ans[i]);
//             }
//         }
//         return answer;
//     }
// };