// https://leetcode.com/problems/top-k-frequent-elements/description/

// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int>freq;
//         for(int i:nums){
//             freq[i]++;
//         }

//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minHeap;
//         for(auto i:freq){
//             int num=i.first;
//             int count=i.second;

//             minHeap.push({count,num});
//             if(minHeap.size()>k){
//                 minHeap.pop();
//             }
//         }
//         vector<int>ans;
//         while(!minHeap.empty()){
//             ans.push_back(minHeap.top().second);
//             minHeap.pop();
//         }

//         return ans;
//     }
// };