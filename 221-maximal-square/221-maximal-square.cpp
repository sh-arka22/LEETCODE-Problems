class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int res = 0;
        vector<vector<int>> mat(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat[i][j] = matrix[i][j]-'0';
            }
        }
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 or j==0){
                    res = max(res,mat[i][j]);
                    continue;
                }
                if(mat[i][j] == 0)
                    continue;
                mat[i][j] += min(mat[i-1][j], min(mat[i-1][j-1], mat[i][j-1]));
                res = max(res,mat[i][j]);
            }
        }
        return res*res;
    }
};