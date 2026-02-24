int scoreBrackets(const string& s) {
    // add your code here
    stack<int>st;

    for(char ch:s){
        if(ch=='('){
            st.push(0);
        }else{
            int val=0;

            while(st.top()!=0){
                val+=st.top();
                st.pop();
            }

            st.pop();

            if(val==0){
                st.push(1);
            }else{
                st.push(2*val);
            }
        }
    }

    int ans=0;
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }

    return ans;
}