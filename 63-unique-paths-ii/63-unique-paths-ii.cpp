class Solution {
public:
    vector<vector<int>>dp;
int recc(int n, int m, vector<vector<int>>&grid){
    // if(n<0 or m<0) return 0;
    if(n==0 and m==0) return dp[n][m] = 1;
    if(dp[n][m] != -1) return dp[n][m];
    int left = 0;int right = 0;
    if(m>0){
        right = grid[n][m-1] ? 0 : recc(n,m-1, grid);
    }
    if(n>0){
        left = grid[n-1][m] ? 0 : recc(n-1,m, grid);
    }
    return dp[n][m] = left + right;
}

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int n = obstacleGrid.size()-1;
    int m = obstacleGrid[0].size()-1;
    dp.resize(n+1, vector<int>(m+1,-1));
    if(obstacleGrid[0][0] or obstacleGrid[n][m]) return 0;
    return recc(n,m,obstacleGrid);
}
};