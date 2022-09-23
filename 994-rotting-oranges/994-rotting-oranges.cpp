class Solution {
public:
int orangesRotting(vector<vector<int>>& grid) {
    deque<pair<int,int>>que;
    int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
    int n = grid.size(), m  = grid[0].size();

    for(int i = 0; i <n;i++){
        for(int j = 0; j <m;j++){
            if(grid[i][j] == 2) que.push_back({i,j});
        }
    }
    int rad = 0;
    while(que.size()){
        int sz = que.size();;
        while(sz--){
            auto [x, y] = que.front();
            que.pop_front();
            for(auto &[dx, dy]: dir){
                int a = x+dx, b = y+dy;
                if(a >= 0 and b >= 0 and a<n and b<m and grid[a][b] == 1){
                    grid[a][b] = 2;
                    que.push_back({a,b});
                }
            }
        }
        rad++;
    }
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) if(grid[i][j] == 1) return -1;

    return max(0,rad-1);
}
};