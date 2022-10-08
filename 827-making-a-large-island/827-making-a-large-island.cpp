class Solution {
private:
    int *parr;
    int *size;
    int dirs[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    void DSUformation(vector<vector<int>>& grid){
        int n = grid.size(), m = grid[0].size();
        parr = new int[n*m];
        size = new int[n*m];
        for(int i=0;i<n*m;i++){
            parr[i] = i;
            size[i] = 1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] != 1) continue;
                int p1 = findParr(i*m+j);
                for(auto &[dr,dc]:dirs){
                    int r = i+dr, c = j+dc;
                    if(r<0 or c<0 or r>=n or c>=m or grid[r][c] != 1) continue;
                    int p2 = findParr(r*m+c);
                    if(p1 != p2){
                        parr[p2] = p1;
                        size[p1] += size[p2];
                    }
                }
            }
        }
    }
public:
    int largestIsland(vector<vector<int>>& grid) {
        DSUformation(grid);
        int n = grid.size(), m = grid[0].size();
        // for(int i=0;i<n*m;i++) cout<<size[i]<<" ";
        int maxi = 0;
        for(int i=0;i<n*m;i++) maxi = max(maxi, size[i]);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] != 0) continue;
                int res = 1;
                unordered_set<int>st;
                for(auto &[dr,dc]:dirs){
                    int r = i+dr, c = j+dc;
                    if(r<0 or c<0 or r>=n or c>=m or grid[r][c] != 1) continue;
                    int key = findParr(r*m+c);
                    if(st.count(key)) continue;
                    res += size[key];
                    st.insert(key);
                }
                maxi = max(maxi, res);
            }
        }
        return maxi;
    }
};