class Solution {
private:
    int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
    int dfs(vector<vector<int>>& grid, int r, int c, int n, int m){
        int res = 1;
        grid[r][c] = 0;
        for(auto&[dr,dc]:dir){
            if(r+dr<0 or r+dr>=n or c+dc<0 or c+dc>=m or grid[r+dr][c+dc] == 0)
                continue;
            res += dfs(grid, r+dr, c+dc, n, m);
        }
        return res;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int res = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 0)
                    continue;
                res = max(res,dfs(grid,i,j, n, m));
            }
        }
        return res;
    }
};