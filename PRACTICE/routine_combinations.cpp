int countWorkoutRoutines(vector<int>& calories, int target) {
    vector<int>dp(target+1,0);
    dp[0]=1;

    for(int i=0;i<calories.size();i++){
        for(int j=calories[i];j<=target;j++){
            dp[j]+=dp[j-calories[i]];
        }
    }

    return dp[target];
}