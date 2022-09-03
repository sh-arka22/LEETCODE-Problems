class Solution {
public:
    int dirs[8][2] = {{-2,1}, {-1,2}, {1,2}, {2,1}, {2,-1}, {1,-2}, {-1,-2}, {-2,-1}};
    vector<vector<vector<double>>>dp;
    double recc(int n, int k, int row, int col){
        if(k==0) return dp[k][row][col] = 1.0;
        if(dp[k][row][col] != 0.0) return dp[k][row][col];
        double cnt = 0;
        for(auto &[dr,dc]: dirs){
            int r = row+dr, c = col+dc;
            if(r>=0 and c>=0 and r<n and c<n)
                cnt += recc(n, k-1, r, c);
        }
        return dp[k][row][col] = cnt/8.0;
    }




    double knightProbability(int n, int k, int row, int column) {
        dp.resize(k+1, vector<vector<double>>(n+1, vector<double>(n+1, 0.0)));
        return recc(n, k, row, column);
    }
};