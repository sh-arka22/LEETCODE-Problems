class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int p = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    p+=4;
                    if(i>0 and grid[i-1][j]==1){
                        p-=2;
                    }
                    if(j>0 and grid[i][j-1]==1){
                        p-=2;
                    }
                }
            }
        }
        return p;
    }
};