int countDistinctArtifacts(vector<int>& ids) {
    // add your code here
    if(ids.empty()) return 0;

    sort(ids.begin(),ids.end());

    int count=1;
    for(int i=1;i<ids.size();i++){
        if(ids[i]!=ids[i-1]){
            count++;
        }
    }
    return count;
}