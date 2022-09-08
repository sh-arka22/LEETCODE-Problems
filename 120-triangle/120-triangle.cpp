class Solution {
public:
    vector<vector<int>>dp;
    int recc(vector<vector<int>>& triangle, int n, int r, int c){
        if(r == n) return dp[r][c] = triangle[r][c];
        if(dp[r][c] != -1) return dp[r][c];
        int d = (int)1e9;
        int dg = (int)1e9;
        if(r<n){
            d = recc(triangle, n, r+1, c);
        }
        if(r<n and c<n){
            dg = recc(triangle, n, r+1, c+1);
        }
        return dp[r][c] = min(d, dg)+triangle[r][c];
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size()-1;
        dp.resize(n+1, vector<int>(n+1,-1));
        return recc(triangle, n, 0, 0);
    }
};