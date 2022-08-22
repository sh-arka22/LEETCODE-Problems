class Solution {
public:
    vector<vector<int>> minScore(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        vector<array<int, 3>>sorted;
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         sorted.push_back({grid[i][j], i, j});
        //     }
        // }
        for(int i=0;i<n*m;i++){
            int r = i/m, c = i%m;
            sorted.push_back({grid[r][c],r,c});
        }
        
        sort(begin(sorted), end(sorted));
        
       vector<int>row(n,0), col(m,0);
        
        for(auto &[val,i,j]:sorted){
            grid[i][j] = max(row[i],col[j])+1;
            row[i] = col[j] = grid[i][j];
        }
        return grid;
    }
};