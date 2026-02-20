// https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

// class Solution {
//   public:
//     int minCost(vector<int>& arr) {
//         // code here
//         // we will use a min heap and insert all rope lengths in it
//         priority_queue<int, vector<int>,greater<int>>pq_min;
//         for(int i=0;i<arr.size();i++){
//             pq_min.push(arr[i]);
//         }
        
//         // always extract two smallest elements, combine them, add cost, push the combined rope back
//         int total=0;
//         while(pq_min.size()>1){
//             int a=pq_min.top();
//             pq_min.pop();
//             int b=pq_min.top();
//             pq_min.pop();
            
//             int cost=a+b;
//             total+=cost;
            
//             pq_min.push(cost);
//         }
        
//         return total;
//     }
// };