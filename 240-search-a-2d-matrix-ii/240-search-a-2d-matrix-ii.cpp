class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int n = mat.size(), m = mat[0].size();
        int r = 0, c = m-1;
        while(r<n and c>=0){
            if(mat[r][c] == tar) return 1;
            if(mat[r][c] < tar){
                r++;
            }
            else if(mat[r][c] > tar){
                c--;
            }
        }
        return false;
    }
};