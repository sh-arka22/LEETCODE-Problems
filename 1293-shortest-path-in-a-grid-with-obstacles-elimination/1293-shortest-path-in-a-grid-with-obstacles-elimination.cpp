class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,pair<int,int>>> PendingNodes;
        vector<vector<vector<bool>>> visited(n,vector<vector<bool>>(m,vector<bool>(k+1,false)));
        PendingNodes.push({k,{0,0}});
        visited[0][0][k] = true;
        const int dir[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};
        while(!PendingNodes.empty()){
            auto Front = PendingNodes.front();
            PendingNodes.pop();
            int currentK = Front.first;
            int x = Front.second.first/m;
            int y = Front.second.first%m;
            int moves = Front.second.second;
            
            if(x == n-1 && y == m-1){
                return moves;
            }
            
            for(int i = 0 ; i < 4 ; i++){
                int newX = x+dir[i][0];
                int newY = y+dir[i][1];
                int NewK = currentK;
                if(newX >= 0 && newY >= 0 && newX < n && newY < m){
                    if(grid[newX][newY])
                        NewK--;
                    
                    if(NewK < 0 || visited[newX][newY][NewK])
                        continue;
                    PendingNodes.push({NewK,{newX*m+newY,moves+1}});
                    visited[newX][newY][NewK] = true;
                }
            }
        }
        return -1;
    }
};