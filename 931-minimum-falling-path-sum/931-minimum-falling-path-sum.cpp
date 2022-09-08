class Solution {
public:
int dir[3][2] = {{-1,-1},{-1,0},{-1,1}};
vector<vector<int>>dp;
int recc(vector<vector<int>>& matrix, int R, int C){
    for(int r=0;r<=R;r++){
        for(int c=0;c<=C;c++){
            if(r==0){
                dp[r][c] = matrix[r][c];;
                continue;
            }
            int mini = (int)1e9;
            for(auto &[dr,dc]: dir){
                int x = r+dr, y = c+dc;
                if(x<0 or y<0 or x>=matrix.size() or y>=matrix[0].size()) continue;
                mini = min(mini,dp[x][y]);
            }
            dp[r][c] = mini+matrix[r][c];
        }
    }
    return dp[R][C];
}

int minFallingPathSum(vector<vector<int>>& matrix) {
    int r = matrix.size(), c = matrix[0].size();
    dp.resize(r,vector<int>(c));
    int mini = (int)1e9;
    for(int j=c-1;j>=0;j--){
        mini = min(mini,recc(matrix,r-1,j));
    }
    return mini;
}
};