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
        grid[0][0] = 1;
        
        int rad = 1;
        while(que.size()){
            int sz = que.size();
            
            while(sz--){
                auto par = que.front();
                que.pop();
                int x = par.first, y = par.second;
                // grid[x][y] = 1; //if i use it here it give me tle
                if(x == n-1 and y == n-1)
                    return rad;
                
                for(auto &[dr,dc]:dir){
                    if(x+dr < 0 or x+dr == n or y+dc < 0 or y+dc == n or grid[x+dr][y+dc] == 1)
                        continue;
                    grid[x+dr][y+dc] = 1; //. if i use here it dont give me tle
                    que.push({x+dr,y+dc});
                }
            }
            rad++; // 1 2
        }
        return -1;
    }
};