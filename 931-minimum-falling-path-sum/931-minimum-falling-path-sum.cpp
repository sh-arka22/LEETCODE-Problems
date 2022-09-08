class Solution {
public:
    int dir[3][2] = {{-1,-1},{-1,0},{-1,1}};
    vector<vector<int>>dp;
    int recc(vector<vector<int>>& matrix, int r, int c){
        if(r==0) return dp[r][c] = matrix[r][c];
        if(dp[r][c] != -(int)1e4-1) return dp[r][c];
        int mini = (int)1e9;
        for(auto v: dir){
            int dr = v[0], dc = v[1];
            int x = r+dr, y = c+dc;
            if(x<0 or y<0 or x>=matrix.size() or y>=matrix[0].size()) continue;
            mini = min(mini,recc(matrix,x,y));
        }
        return dp[r][c] = mini+matrix[r][c];
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        int mini = (int)1e9;
        dp.resize(r,vector<int>(c,-(int)1e4-1));
        for(int j=c-1;j>=0;j--){
            mini = min(mini,recc(matrix,r-1,j));
        }
        return mini;
    }
};