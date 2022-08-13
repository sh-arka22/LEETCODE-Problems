class Solution {
public:
    int n , m;
    int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    void dfs(int i, int j, vector<vector<int>>& heights, vector<vector<int>>& tmp){
        tmp[i][j] += 1;
        for(auto [dr,dc]:dir){
            int r = i+dr, c = j+dc;
            if(r<0 or r>=n or c<0 or c>=m or tmp[r][c] != 0 or heights[r][c] < heights[i][j]) continue;
            dfs(r,c,heights,tmp);
        }
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size(), m = heights[0].size();
        this->n = n; this->m = m;
        vector<vector<int>>pasific(n, vector<int>(m,0));
        vector<vector<int>>atlantic(n, vector<int>(m,0));
        //from pasific call
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0  or j == 0){
                    dfs(i,j,heights,pasific);
                }
            }
        }
        
        //for atlastic call
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(i==n-1 or j==m-1){
                    dfs(i,j,heights,atlantic);
                }
            }
        }
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pasific[i][j] >= 1 and atlantic[i][j] >= 1){
                    ans.push_back({i,j});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<pasific[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"///////////////////////////////////"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<atlantic[i][j]<<" ";
            }
            cout<<endl;
        }
        return ans;
    }
};