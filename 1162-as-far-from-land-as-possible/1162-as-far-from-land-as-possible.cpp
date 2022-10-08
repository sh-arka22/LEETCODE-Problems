class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        
        deque<array<int,2>>que;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1)
                    que.push_back({i,j});
            }
        }
        if(que.size()==(n*m)) return -1;
        int rad = 0;
        int dirs[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while(que.size()){
            int sz = que.size();
            while(sz--){
                auto [row, col] = que.front();
                que.pop_front();
                for(auto [dr,dc]:dirs){
                    int n_r = row+dr, n_c = col+dc;
                    if(n_r<0 or n_c<0 or n_r>=n or n_c>=m or grid[n_r][n_c]!=0) continue;
                    que.push_back({n_r,n_c});
                    grid[n_r][n_c]=1;
                }
            }
            rad++;
        }
        return rad-1;
    }
};