class Solution {
public:
    int dir[8][2] = {{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1}};
                   //w.       ne      n.     ne     e    se    s     sw
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0] != 0 or grid[n-1][n-1] != 0)
            return -1;
        
        queue<pair<int,int>>que;
        que.push({0,0});
        
        int rad = 1;
        int lastrow, lastcolum;
        while(que.size()){
            int sz = que.size();
            
            while(sz--){
                auto par = que.front();
                que.pop();
                int x = par.first, y = par.second;
                // grid[x][y] = 1;
                if(x == n-1 and y == n-1)
                    return rad;
                
                for(auto &[dr,dc]:dir){
                    lastrow = x, lastcolum = y;
                    if(x+dr < 0 or x+dr == n or y+dc < 0 or y+dc == n or grid[x+dr][y+dc] == 1)
                        continue;
                    grid[x+dr][y+dc] = 1;
                    que.push({x+dr,y+dc});
                }
            }
            rad++; // 1 2
        }
        if(lastrow != n-1 or lastcolum != n-1)
            return -1;
        return rad;
    }
};