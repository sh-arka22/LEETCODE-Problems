class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<vector<int>>>vis(n,vector<vector<int>>(m,vector<int>(k+1,0)));
        deque<array<int,3>>que;
        que.push_back({0,0,k});
        int steps = 0;
        int dir[4][2] = {{-1,0}, {0,-1},{1,0},{0,1}};
        while(que.size()){
            int sz = que.size();
            while(sz--){
                auto [r,c,obs] = que.front();
                // path = path + "(" + to_string(r) + "," + to_string(c)  + "," + to_string(obs) + ")" + "->";
                que.pop_front();
                if(r == n-1 and c == m-1) return steps;
                for(auto &[dr, dc]:dir){
                    int a = r+dr, b = c+dc;
                    if(a>=0 and b>=0 and a<n and b<m){
                        if(grid[a][b]==0 and !vis[a][b][obs]){
                            que.push_back({a,b,obs});
                            vis[a][b][obs] = 1;
                        }
                        else if(grid[a][b]==1 and obs>0 and !vis[a][b][obs-1]){
                            que.push_back({a,b,obs-1});
                            vis[a][b][obs-1] = 1;
                        }
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};