vector<int> nextHigherTemperatures(vector<int>& temperatures) {
    // add your code here
    int n=temperatures.size();
    vector<int>ans(n,-1);
    stack<int> st;
    for(int i=2*n-1;i>=0;i--){
        int idx=i%n;
        while(!st.empty() && temperatures[st.top()]<=temperatures[idx]){
            st.pop();
        }
        if(i<n){
            if(!st.empty()){
                ans[idx]=temperatures[st.top()];
            }
        }
        st.push(idx);
    }
    return ans;
}