class Solution {
public:
    int maximumMinimumPath(vector<vector<int>>& grid) {
        int n = size(grid), m = size(grid[0]);
        int dirs[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        priority_queue<pair<int,int>> pq;
        pq.push({grid[0][0], 0});
        vector<int>vis(n*m, 0);
        vis[0] = 1;
        int ans = grid[0][0];

        while(pq.size()){
            auto [curVal, idx] = pq.top();
            pq.pop();
            ans = min(ans, curVal);
            int r = idx/m, c = idx%m;
            if(r == n-1 and c == m-1) return ans;
            for(auto [dr, dc]: dirs){
                int newR = r+dr, newC = c+dc;
                if(newR<0 or newC<0 or newR>=n or newC>=m or vis[newR*m+newC]) continue;
                pq.push({grid[newR][newC], newR*m+newC});
                vis[newR*m+newC] = 1;
            }
        }
        return ans;
    }
};