class Solution {
    vector<vector<vector<int>>>dp;
    int dir[2][2] = {{-1,0},{0,-1}};
    int dfs(vector<vector<int>>& grid, int k, int i, int j, int sum){
        if(i==0 and j==0){
            if(i==0 and j==0 and sum%k == 0)
                return 1;
            return 0;
        }
        if(dp[i][j][sum%k] != -1) return dp[i][j][sum%k];
        int cnt = 0;
        for(auto [dr,dc]:dir){
            int newRow = i+dr, newCol = j+dc;
            if(newRow<0 or newCol<0) continue;
            cnt = (cnt + dfs(grid, k, newRow, newCol, sum+grid[newRow][newCol])%1000000007)%1000000007;
        }
        return dp[i][j][sum%k] = cnt;
    }
public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        dp.resize(n, vector<vector<int>>(m, vector<int>(51,-1)));
        return dfs(grid, k, n-1, m-1, grid[n-1][m-1]);
    }
};