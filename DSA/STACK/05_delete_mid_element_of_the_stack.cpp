// https://www.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1

// class Solution {
//   public:
//     // Function to delete middle element of a stack.
//     void deleteMid(stack<int>& s) {
//         // code here.   
//         int mid=s.size()/2;
//         int count=0;
//         vector<int>ans;
//         while(!s.empty()){
//             ans.push_back(s.top());
//             s.pop();
//         }
        
        
//         ans.erase(ans.begin()+mid);
//         for(int i=ans.size()-1;i>=0;i--){
//             s.push(ans[i]);
//         }
//     }
// };


// class Solution {
//   public:
//     // Function to delete middle element of a stack.
//     void deleteFromStack(stack<int>&s,int count,int size){
//         if(s.empty() || count==size/2){
//             s.pop();
//             return;
//         }
        
//         int temp=s.top();
//         s.pop();
//         deleteFromStack(s,count+1,size);
//         s.push(temp);
//     }
    
//     void deleteMid(stack<int>& s) {
//         // code here.   
//         int count=0;
//         deleteFromStack(s,count,s.size());
//     }
// };