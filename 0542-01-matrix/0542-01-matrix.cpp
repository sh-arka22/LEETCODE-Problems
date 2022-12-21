class Solution {
public:
    int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = size(mat);
        int m = size(mat[0]);
        
        vector<vector<int>>dis(n,vector<int>(m,0));
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        deque<array<int,2>>que;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == 0){
                    que.push_back({i,j});
                    vis[i][j] = 1;
                }
                else vis[i][j] = 0;
            }
        }
        
        int rad = 0;
        while(que.size()){
            int sz = que.size();
            while(sz--){
                auto [i,j] = que.front();
                que.pop_front();
                dis[i][j] = rad;
                
                for(auto &[dr,dc]:dir){
                    if(i+dr<0 or j+dc<0 or i+dr>=size(mat) or j+dc>=size(mat[0]) or vis[i+dr][j+dc]) continue;
                    que.push_back({i+dr, j+dc});
                    vis[i+dr][j+dc] = 1;
                }
            }
            rad++;
        }
        return dis;
    }
};