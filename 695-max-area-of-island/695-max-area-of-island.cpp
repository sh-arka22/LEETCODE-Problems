class Solution {
public:
    int parr[3000], size[3000];
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        // GRAPH SOLUTION USING (_Union Find_)
        int maxi = 0;
        int n = grid.size(), m = grid[0].size();
        if(n == 0)
            return 0;
        for(int i=0;i<n*m;i++){
            parr[i] = i;
            size[i] = 1;
        }
        int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    int p1 = findParr(i*m+j);
                    for(auto &[dr,dc]:dir){
                        int r = i+dr, c = j+dc;
                        if(r>=0 and r<n and c>=0 and c<m and grid[r][c] == 1){
                            //means i am a edge of {i,j}
                            int p2 = findParr(r*m + c);
                            if(p1 != p2){
                                parr[p2] = p1;
                                size[p1] += size[p2];
                            }
                        }
                    }
                    maxi = max(maxi, size[p1]);
                }
            }
        }
        return maxi;
    }
};