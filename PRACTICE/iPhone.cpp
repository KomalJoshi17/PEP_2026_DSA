queue<int> reverseLastK(queue<int> q, int k) {
    // add your code here
    if(k>q.size()) return q;
    int n=q.size();
    stack<int> st;
    
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }

    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    return q;
}