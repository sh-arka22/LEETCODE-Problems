class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int>ans(m,0);
        
        for(int j=0;j<m;j++){
            int currPos = j;
            int nextPos = -1;
            for(int i=0;i<n;i++){
                nextPos = currPos+grid[i][currPos];
                if(nextPos<0 or nextPos>=m or grid[i][currPos] != grid[i][nextPos]){
                    currPos = -1;
                    break;
                }
                currPos = nextPos;
            }
            ans[j] = currPos;
        }
        return ans;
    }
};