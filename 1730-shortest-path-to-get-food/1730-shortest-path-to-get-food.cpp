class Solution {
public:
    int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
    int getFood(vector<vector<char>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        queue<pair<int,int>>que;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '*'){
                    que.push({i,j});
                    break;
                }
            }
        }
        
        int rad = 1;
        while(que.size()){
            int sz = que.size();
            while(sz--){
                auto top = que.front(); que.pop();
                int r = top.first, c = top.second;
                for(auto &[dr,dc]:dir){
                    if(r+dr >=0 and r+dr < n and c+dc >= 0 and c+dc < m and grid[r+dr][c+dc] == '#')
                            return rad;
                    if(r+dr >=0 and r+dr < n and c+dc >= 0 and c+dc < m and grid[r+dr][c+dc] == 'O'){
                        que.push({r+dr,c+dc});
                        grid[r+dr][c+dc] = 'X';
                    }
                }
            }
            rad++;
        }
        return -1;
    }
};