class Solution {
public:
    // O(M + N)
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int r = mat.size();// row
        int c = mat[0].size();//col
        
        int i =0, j = c-1;
        
        while(i<r && j>=0 && i>=0 && j<c)
        {
            int x = (i-1 <0)?-1:mat[i-1][j];
            int y = (j-1 <0)?-1:mat[i][j-1];
            int z = (j+1==c)?-1:mat[i][j+1];
            int w = (i+1==r)?-1:mat[i+1][j];
            
            
            if(mat[i][j]>x && mat[i][j]>y && mat[i][j]>z && mat[i][j]>w)
                return {i,j};
            
            int p = max(x, max(y,max(w,z)));
            
            if(p==x)
                i--;
            else if(p==y)
                j--;
            else if(p==w)
                i++;
            else
                j++;
            
        }
        return {};
    }
};