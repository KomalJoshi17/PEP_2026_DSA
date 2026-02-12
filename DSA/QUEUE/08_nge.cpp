// https://leetcode.com/problems/next-greater-element-i/

// class Solution {
// public:
//     vector<int>nge(vector<int>&arr){
//         stack<int>st;
//         int n=arr.size();
//         vector<int>ans(n);
        
//         for(int i=n-1;i>=0;i--){
//             while(!st.empty() && st.top()<=arr[i]){
//                 st.pop();
//             }
//             if(st.empty()){
//                 ans[i]=-1;
//             }
//             else{
//                 ans[i]=st.top();
//             }
//             st.push(arr[i]);
//         }
//         return ans;
//     }
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         int n=nums1.size();
//         int m=nums2.size();
        
//         vector<int>NGE=nge(nums2);
//         unordered_map<int,int>mp;
//         for(int i=0;i<m;i++){
//             mp[nums2[i]]=NGE[i];
//         }   
    
//         vector<int>res;
//         for(int i=0;i<n;i++){
//             res.push_back(mp[nums1[i]]);
//         }

//         return res;
//     }
// };