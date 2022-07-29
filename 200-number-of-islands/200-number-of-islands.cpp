class Solution {
private:
    int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
    void dfs(vector<vector<char>>& grid, int r, int c, int n, int m){
        grid[r][c] = '0';
        for(auto&[dr,dc]:dir){
            if(r+dr<0 or r+dr>=n or c+dc<0 or c+dc>=m or grid[r+dr][c+dc] == '0')
                continue;
            dfs(grid, r+dr, c+dc, n, m);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() == 0 or grid[0].size() == 0)
            return 0;
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j] == '0')
                    continue;
                cnt++;
                dfs(grid,i,j,n,m);
            }
        }
        return cnt;
    }
};