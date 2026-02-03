long long countPerfectSquaresInRange(long long L, long long R) {
    // add your code here
    long long low=0;
    long long high=1e9;
    long long first=-1;
    long long last=-1;

    while(low<=high){
        long long mid=low+(high-low)/2;
        if(mid*mid>=L){
            first=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    low=0;
    high=1e9;

    while(low<=high){
        long long mid=low+(high-low)/2;
        if(mid*mid<=R){
            last=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    if(first>last || first==-1 || last==-1) return 0;
    return last-first+1;
}