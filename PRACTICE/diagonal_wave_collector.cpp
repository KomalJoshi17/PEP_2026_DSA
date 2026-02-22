vector<vector<int>> diagonalWaveCollector(vector<vector<int>>& grid) {
    // add your code here
    int m=grid.size();
    int n=grid[0].size();
    vector<vector<int>>result;

    for(int i=0;i<=m+n-2;i++){
        vector<int>diagonal;
        for(int j=0;j<m;j++){
            int k=i-j;

            if(k>=0 && k<n){
                diagonal.push_back(grid[j][k]);
            }
        }
        result.push_back(diagonal);
    }
    return result;
}