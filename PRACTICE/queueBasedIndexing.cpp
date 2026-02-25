long long timeRequiredToBuyTickets(vector<int>& v, int k) {
    // add your code here
    long long ans=0;
    int target=v[k];
    int n=v.size();

    for(int i=0;i<n;i++){
        if(i<=k){
            ans+=min(v[i],target);
        }else{
            ans+=min(v[i],target-1);
        }
    }
    return ans;
}
