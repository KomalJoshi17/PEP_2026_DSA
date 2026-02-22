
int matrixBorderSum(vector<vector<int>>& grid) {
    // add your code here
    int m=grid.size();
    int n=grid[0].size();
    int sum=0;

    if(m==1){
        for(int j=0;j<n;j++){
            sum+=grid[0][j];
        }
        return sum;
    }

    if(n==1){
        for(int i=0;i<m;i++){
            sum+=grid[i][0];
        }
        return sum;
    }

    for(int j=0;j<n;j++){
        sum+=grid[0][j];
    }

    for(int j=0;j<n;j++){
        sum+=grid[m-1][j];
    }

    for(int i=1;i<m-1;i++){
        sum+=grid[i][0];
    }

    for(int i=1;i<m-1;i++){
        sum+=grid[i][n-1];
    }

    return sum;
}