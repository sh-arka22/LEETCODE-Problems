class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int z = 0, o = 0;
        vector<int> r1(n,0), r0(n,0), c1(m,0), c0(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                r1[i] += grid[i][j]==1;
                r0[i] += grid[i][j]==0;
                c1[j] += grid[i][j]==1;
                c0[j] += grid[i][j]==0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j] = (r1[i]+c1[j]-r0[i]-c0[j]);
            }
        }
        return grid;
    }
};