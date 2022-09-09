class Solution {
public:
    vector<vector<vector<int>>>dp;
    int recc(vector<vector<int>>&grid, int i, int ja, int jb){
        if(ja<0 or jb<0 or ja>=grid[0].size() or jb>=grid[0].size()) return -(int)1e9;
        if(i==grid.size()-1){
            if(ja == jb) return dp[i][ja][jb] = grid[i][ja];
            else return dp[i][ja][jb] = grid[i][ja] + grid[i][jb];
        }
        int maxi = -(int)1e9;
        if(dp[i][ja][jb] != 101) return dp[i][ja][jb];
        //explore all paths
        for(int dj1 = -1; dj1<= 1;dj1++){
            for(int dj2 = -1; dj2<= 1; dj2++){
                int val = 0;
                if(ja == jb) {
                    val = grid[i][ja];
                }
                else{
                    val = grid[i][ja] + grid[i][jb];
                }

                val += recc(grid, i+1, ja+dj1, jb+dj2);
                maxi = max(val, maxi);
            }
        }
        return dp[i][ja][jb] = maxi;
    }


    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        dp.resize(n,vector<vector<int>>(m,vector<int>(m,101)));
        return recc(grid, 0, 0, m-1);
    }
};