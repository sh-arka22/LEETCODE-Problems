class Solution {
private:
    int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    void dfs(vector<vector<int>>& grid, int r, int c, int n, int m){
        grid[r][c] = 0;
        for(auto &[dr,dc]:dir){
            if(r+dr<0 or r+dr==n or c+dc<0 or c+dc==m or grid[r+dr][c+dc] == 0)
                continue;
            dfs(grid, r+dr, c+dc, n, m);
        }
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n =grid.size(), m =grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 or j==0 or i==n-1 or j==m-1) and (grid[i][j]==1)){
                    dfs(grid, i, j, n, m);
                }
            }
        }
        
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cnt+=(grid[i][j] == 1);
            }
        }
        
        return cnt;
    }
};