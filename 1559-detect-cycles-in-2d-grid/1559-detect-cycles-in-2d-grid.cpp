class Solution {
public:
    int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    int parr[5000001];
    int vis[500][500];
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        
        for(int i=0;i<n*m;i++) parr[i] = i;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int k = i*m+j;
                vis[i][j] = 1;
                int p1 = findParr(k);
                for(auto &[dr,dc]:dir){
                    int r = i+dr, c = j+dc;
                    if(r<0 or c<0 or r>=n or c>=m or grid[i][j] != grid[r][c] or vis[r][c]) continue;
                    int p2 = findParr(r*m+c);
                    if(p1 != p2){
                        parr[p2] = p1;
                    }
                    else{
                        return true;
                    }
                }
            }
        }
        // for(int i=0;i<n*m;i++){
        //     cout<<"r-"<<i/m<<" "<<"c-"<<i%m<<"  parr-"<<parr[i]<<endl;
        // }
        return false;
    }
};