class Solution {
private:
    int dirs[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    void spreadFire(vector<vector<int>>&fire){
        int n = fire.size(), m = fire[0].size();
        deque<array<int,2>>queue;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(fire[i][j]==1){
                    queue.push_back({i,j});
                    fire[i][j] = 0;
                }
                else if(fire[i][j]==2)
                    fire[i][j] = -1;
            }
        }
        
        vector<vector<int>>vis(n, vector<int>(m,0));
        while(queue.size()){
            int sz = queue.size();
            while(sz--){
                auto [row,col] = queue.front(); queue.pop_front();
                vis[row][col] = 1;
                for(auto [dr, dc]: dirs){
                    int newRow = row+dr, newCol = col+dc;
                    if(newRow<0 or newCol<0 or newRow>=n or newCol>=m or fire[newRow][newCol] == -1 or vis[newRow][newCol]) continue;
                    vis[newRow][newCol] = 1;
                    fire[newRow][newCol] = fire[row][col]+1;
                    queue.push_back({newRow,newCol});
                }
            }
        }
    }
    void updateFire(vector<vector<int>>&fire){
        int n = fire.size(), m = fire[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(fire[i][j] == 0)
                    fire[i][j] = INT_MAX;
            }
        }
    }
    bool isPossible(vector<vector<int>> &fire, int maxT){
        int m=fire.size();
        int n=fire[0].size();
        vector<vector<int>> directions = {{-1,0},{0,-1},{1,0},{0,1}};
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        
        visited[0][0]=true; // mark start idx as visited
        
        queue<array<int,3>> q;
        q.push({0,0,maxT}); 
        
        while(!q.empty()){
            auto [r,c,t]=q.front();
            q.pop();

            if(r==m-1 && c==n-1)
                return true; // reached home
            
            if(fire[r][c]<=t)  //fire reached to person at same time or before he reached 
                continue;
            
            for(int i=0;i<directions.size(); i++){
                int nR=r+directions[i][0]; // new row
                int nC=c+directions[i][1]; // new Col
                
               if(min(nR, nC)>=0 && nR<m && nC<n && fire[nR][nC]!=-1 && t+1 <= fire[nR][nC]){
                   if(!visited[nR][nC]){
                       visited[nR][nC]=true; //make it visited
                       q.push({nR, nC, t+1}); // push in queue to check adj
                   }
               }
            }
        }
        
        return false; //cannot reach if waited maxT min at initial pos/no way possibe
    }
public:
    int maximumMinutes(vector<vector<int>>& grid) {
        vector<vector<int>>fire = grid;
        spreadFire(fire);
        updateFire(fire);
        int l = 0, r = (int)1e9, ans = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(isPossible(fire, mid)){
                ans = max(mid,ans);
                l = mid+1;
            }
            else r = mid-1;
        }
        
        return ans;
    }
};