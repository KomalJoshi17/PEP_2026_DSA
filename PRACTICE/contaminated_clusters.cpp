void dfs(vector<vector<char>>& servers,int i, int j,int n,int m){
    if(i<0 || i>=n || j<0 || j>=m || servers[i][j]!='.'){
        return;
    }
    servers[i][j]='#';
    dfs(servers,i+1,j,n,m);
    dfs(servers,i-1,j,n,m);
    dfs(servers,i,j+1,n,m);
    dfs(servers,i,j-1,n,m);
}

int countContaminationClusters(vector<vector<char>>& servers, int n, int m)  {
    // add your code here
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(servers[i][j]=='.'){
                count++;
                dfs(servers,i,j,n,m);
            }
        }
    }
    return count;
}