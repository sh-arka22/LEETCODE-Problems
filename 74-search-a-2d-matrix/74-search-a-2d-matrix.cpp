class Solution {
public:

    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int n = mat.size(), m = mat[0].size();
        
        int si = 0, ei = n*m-1;
        
        while(si<=ei){
            int mid = (si+ei)/2;
            int r = mid/m;
            int c = mid%m;
            if(mat[r][c] == tar) return true;
            else if(mat[r][c] < tar) si = mid+1;
            else ei = mid-1;
        }
        return false;
    }
};