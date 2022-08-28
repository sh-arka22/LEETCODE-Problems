class Solution {
public:
    int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    int vis[100][100];
    int N, M;
    void visClear(){
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                vis[i][j] = 0;
            }
        }
    }
    
    bool dfs(vector<vector<int>>& grid, int i, int j, int tar){
        if(i == N-1 and j == M-1) return true;
        if(grid[i][j] < tar) return false;
        vis[i][j] = 1;
        bool flag = false;
        for(auto &[dr,dc]:dir){
            int r = i+dr, c = j+dc;
            if(r<0 or c<0 or r>=N or c>=M or vis[r][c] or grid[r][c]<tar) continue;
            flag = flag or dfs(grid, r, c, tar);
        }
        return flag;
    }
    int maximumMinimumPath(vector<vector<int>>& grid) {
        N = grid.size();
        M = grid[0].size();
        
        int l = 0, r = 1e9;
        
        int mid;
        int ans = -11;
        while(l<=r){
            mid = (r+l)/2;
            // cout<< mid<<endl;
            bool flag = dfs(grid, 0, 0, mid);
            
            if(flag){
                ans = max(ans,mid);
                l = mid+1;
            }
            else r = mid-1;
            
            visClear();
        }
        return ans;
    }
};