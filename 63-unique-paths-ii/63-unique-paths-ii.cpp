class Solution {
public:
    vector<vector<int>>dp;
int tabu(int N, int M, vector<vector<int>>&grid){
    for(int n =0;n<=N;n++){
        for(int m=0;m<=M;m++){
            if(n==0 and m==0){
                dp[n][m] = 1;
                continue;
            }

            int left = 0;int right = 0;
            if(m>0){
                right = grid[n][m-1] ? 0 : dp[n][m-1];
            }
            if(n>0){
                left = grid[n-1][m] ? 0 : dp[n-1][m];
            }
            dp[n][m] = left + right;
        }
    }
    return dp[N][M];
}

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int n = obstacleGrid.size()-1;
    int m = obstacleGrid[0].size()-1;
    dp.resize(n+1, vector<int>(m+1,0));
    if(obstacleGrid[0][0] or obstacleGrid[n][m]) return 0;
    return tabu(n,m,obstacleGrid);
}
};