int longestClimbersJourney(vector<int>& nums) {
    // Add your code here
    vector<int>temp;

    for(int num:nums){
        int low=0;
        int high=temp.size()-1;
        int pos=temp.size();

        while(low<=high){
            int mid=low+(high-low)/2;

            if(temp[mid]>=num){
                pos=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }

        if(pos==temp.size()){
            temp.push_back(num);
        }else{
            temp[pos]=num;
        }
    }
    return temp.size();
}