class Solution {
public:
    int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        set<vector<int>>st;
        
        st.insert({grid[0][0],0,0});
        
        int maxi = INT_MIN;
        while(st.size()){
            vector<int>v = *st.begin();
            int w = v[0], i = v[1], j = v[2];
            st.erase(st.begin());
            maxi = max(maxi, grid[i][j]);
            if(i==n-1 and j ==m-1) return maxi;
            if(vis[i][j]) continue; //cycle prasent
            vis[i][j] = 1;
            
            for(auto &[dr,dc]:dir){
                int r = i+dr, c = j+dc;
                if(r<0 or c<0 or r>=n or c>=m) continue;
                st.insert({grid[r][c],r,c});
            }
        }
        return -1;
    }
};