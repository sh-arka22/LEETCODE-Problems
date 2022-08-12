class Solution {
public:
    const static int N = 1e5;
    int parr[N];
    int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        int isLand = 0;
        for(int i=0;i<n*m;i++) parr[i] = i, isLand += (grid[i/m][i%m] == '1');
        cout<<isLand;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '0') continue;
                
                int p1 = findParr(i*m+j);
                for(auto &[dr,dc]:dir){
                    int r = dr+i, c = dc+j;
                    if(r>=0 and r<n and c>=0 and c<m and grid[r][c] == '1'){
                        int p2 = findParr(r*m+c);
                        
                        if(p1 != p2){
                            parr[p2] = p1;
                            isLand--;
                        }
                    }
                }
            }
        }
        return isLand;
    }
};