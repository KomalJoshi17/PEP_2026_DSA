// https://leetcode.com/problems/gas-station/description/

// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int n=gas.size();
//         int balance=0, currTank=0, totalTank=0;
//         int start=0;
//         for(int i=0;i<n;i++){
//             balance=gas[i]-cost[i];
//             totalTank+=balance;
//             currTank+=balance;

//             if(currTank<0){
//                 currTank=0;
//                 start=i+1;
//             }
//         }

//         // if totalTank is negative, no solution is there
//         if(totalTank<0){
//             return -1;
//         }

//         return start;
//     }
// };