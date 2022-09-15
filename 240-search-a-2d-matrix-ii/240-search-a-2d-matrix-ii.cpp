class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int n = mat.size(), m = mat[0].size();
        int i = 0, j = m-1;
        
        while(i<n and j>=0){
            if(mat[i][j] == tar) return 1;
            else if(mat[i][j]>tar) j--;
            else i++;
        }
        return 0;
    }
};