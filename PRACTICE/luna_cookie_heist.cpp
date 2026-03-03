int minCollectionSpeed(vector<int>& cookies, int h) {
    // Add your code here
    int low=1;
    int high=*max_element(cookies.begin(),cookies.end());
    int ans=high;

    while(low<=high){
        int mid=low+(high-low)/2;

        long long hours=0;
        for(int c:cookies){
            hours+=(c+mid-1)/mid;
        }

        if(hours<=h){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}