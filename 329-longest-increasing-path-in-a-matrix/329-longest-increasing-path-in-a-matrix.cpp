class Solution {
public:
    int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>>indegree(n,vector<int>(m,0));
        
        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                for(auto &[dr,dc]:dir){
                    if(r+dr >= 0 and r+dr< n and c+dc >= 0 and c+dc < m and matrix[r+dr][c+dc] > matrix[r][c]){
                        indegree[r+dr][c+dc]++;
                    }
                }
            }
        }
        
        queue<pair<int,int>>que;
        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                if(indegree[r][c] == 0){
                    que.push({r,c});
                }
            }
        }
        
        int rad = 0;
        while(que.size()){
            int sz = que.size();
            while(sz--){
                auto [r,c] = que.front(); que.pop();
                for(auto &[dr,dc]:dir){
                    if(r+dr >= 0 and c+dc >= 0 and r+dr<n and c+dc<m and matrix[r+dr][c+dc] > matrix[r][c]){
                        if(--indegree[r+dr][c+dc] == 0) que.push({r+dr,c+dc});
                    }
                }
            }
            rad++;
        }
        return rad;
    }
};