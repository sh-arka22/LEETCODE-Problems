class Solution {
private:
    int n,m;
    int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
    void dfs(vector<vector<char>> &v,int x, int y){
        if(x<0 or y<0 or x>=n or y>= m or v[x][y] == '0')
            return;
        v[x][y] = '0';
        for(auto &[dx,dy] : dir){
            dfs(v,x+dx,y+dy);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() == 0 or grid[0].size() == 0)
            return 0;
        
        n = grid.size();
        m = grid[0].size();
        int ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '1'){
                    ans ++;
                    dfs(grid, i, j);
                }
            }
        }
        
        return ans;
    }
};