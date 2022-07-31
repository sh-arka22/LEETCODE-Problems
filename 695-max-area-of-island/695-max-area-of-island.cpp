class Solution {
public:
    
    
    int backtrackArea(vector<vector<int>>& grid,int i,int j){
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dir={{0,-1},{-1,0},{0,1},{1,0}};
        
        if(i>=n or j>=m or i<0 or j<0) return 0;
        if(grid[i][j] == 0) return 0;
        grid[i][j] = 0;
        
        int faithArea = 0;
        for(int r=0;r<dir.size();r++){
            faithArea += backtrackArea(grid, i+dir[r][0],j+dir[r][1]);
        }
        return 1+faithArea;
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int maxArea = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                maxArea = max(maxArea,backtrackArea(grid,i,j));
            }
        }
        return maxArea;
    }
};