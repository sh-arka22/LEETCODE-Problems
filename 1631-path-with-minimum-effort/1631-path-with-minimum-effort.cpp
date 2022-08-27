class Solution {
private:
    int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    int vis[100][100];
    int N, M;
    void visClear(){
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                vis[i][j] = 0;
            }
        }
    }
    bool dfs(vector<vector<int>>& heights, int i, int j, int diff){
        if(i==N-1 and j==M-1) return true;
        vis[i][j] = 1;
        bool flag = false;
        for(auto &[dr,dc]:dir){
            int r = i+dr, c = j+dc;
            if(r<0 or c<0 or r>=N or c>=M or abs(heights[r][c]-heights[i][j]) > diff or vis[r][c]) continue;
            flag = flag or dfs(heights, r, c, diff);
        }
        return flag;
    }
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        N = heights.size();
        M = heights[0].size();
        
        int l = 0, r = 1e6;
        
        int mid;
        int ans = INT_MAX;
        while(l<=r){
            mid = (l+r)/2;
            
            bool flag = dfs(heights, 0, 0, mid);
            
            if(flag){
                ans = min(ans,mid);
                r = mid-1;
            }
            else{
                l = mid+1;
            }
            visClear();
        }
        return ans;
    }
};