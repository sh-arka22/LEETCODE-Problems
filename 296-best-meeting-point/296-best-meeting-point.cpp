class Solution {
public:
    int manDis(vector<int>&points, int origin){
        int dis = 0;
        for(int p:points){
            dis += abs(p-origin);
        }
        return dis;
    }
    
    int minTotalDistance(vector<vector<int>>& grid) {
        vector<int>xCor;
        vector<int>yCor;
        // sort(begin(grid), end(grid));
        int n = grid.size(), m = grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1) xCor.push_back(i), yCor.push_back(j);
            }
        }
        
        int row = xCor[xCor.size()/2];
        sort(begin(yCor), end(yCor));
        int col = yCor[yCor.size()/2];
        
        return manDis(xCor, row) + manDis(yCor, col);
    }
};