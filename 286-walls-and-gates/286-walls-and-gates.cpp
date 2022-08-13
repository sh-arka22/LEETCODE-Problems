class Solution {
public:
    const static int emp = 2147483647;
    int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    void wallsAndGates(vector<vector<int>>& rooms) {
        int n = rooms.size(), m = rooms[0].size();
        
        queue<vector<int>>que;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rooms[i][j] == 0)
                    que.push({i,j});
            }
        }
        
        
        int rad = 0;
        while(que.size()){
            int sz = que.size();
            rad++;
            while(sz--){
                vector<int>d = que.front();
                int i = d[0], j = d[1];
                que.pop();
                for(auto &[dr,dc] :dir){
                    int r = i+dr, c=j+dc;
                    if(r<0 or r>=n or c<0 or c>=m or rooms[r][c] != emp) continue;
                    if(rooms[r][c] == emp){
                        rooms[r][c] = rad;
                        que.push({r,c});
                    }
                }
            }
        }
        // return rad;
    }
};