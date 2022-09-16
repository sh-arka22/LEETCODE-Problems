class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n, vector<int>(m,1));
        int total = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 or j==0){
                    dp[i][j] = (matrix[i][j] == 1);
                    total += dp[i][j];
                    continue;
                }
                dp[i][j] = (matrix[i][j] == 0 ? 0 : min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1])) + 1);
                total += dp[i][j];
            }
        }
        return total;
    }
};