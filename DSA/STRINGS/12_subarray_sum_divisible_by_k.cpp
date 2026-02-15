// https://leetcode.com/problems/subarray-sums-divisible-by-k/description/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefsum(n,0);
        prefsum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefsum[i]=prefsum[i-1]+nums[i];
        }
        vector<int> rem(n);
        for(int i=0;i<n;i++){
            rem[i]=prefsum[i]%k;
        }
        int ans=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(rem[i]<0) rem[i]+=k;
            if(rem[i]==0) ans++;
            if(mp.find(rem[i])!=mp.end()){
                ans+=mp[rem[i]];
            }
            mp[rem[i]]++;
        }
        return ans;
    }
};