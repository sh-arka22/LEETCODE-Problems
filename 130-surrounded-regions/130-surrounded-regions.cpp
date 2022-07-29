class Solution {
private:
    int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
    void dfs(vector<vector<char>>& mat, int r, int c){
        mat[r][c] = 't';
        for(auto &[dr,dc]:dir){
            if(r+dr<0 or c+dc<0 or r+dr>=mat.size() or c+dc>=mat[0].size() or mat[r+dr][c+dc] != 'O')
                continue;
            dfs(mat, r+dr, c+dc);
        }
    }
public:
    void solve(vector<vector<char>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0; j<m; j++){
                if(i>0 and j>0 and i<n-1 and j<m-1)
                    continue;
                if(mat[i][j] == 'O'){
                    dfs(mat, i, j);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == 't')
                    continue;
                mat[i][j] = 'X';
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == 't')
                    mat[i][j] = 'O';
            }
        }
    }
};