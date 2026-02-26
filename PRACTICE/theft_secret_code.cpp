int findLongestManuscriptSegment(string s) {
    // Your implementation here
    unordered_set<char>st;
    int left=0;
    int right=0;
    int maxx=0;

    while(right<s.length()){
        while(st.find(s[right])!=st.end()){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);
        maxx=max(maxx,right-left+1);
        right++;
    }
    return maxx;
}