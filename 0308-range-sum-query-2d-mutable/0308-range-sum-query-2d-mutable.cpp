class NumMatrix {
private:
    int n, m;
    vector<vector<int>>bit;
    vector<vector<int>>matrix;
    int sum(int row, int col) {
        int ans = 0;
        
        for(int i = row; i>0; i -= i&-i) {
            for(int j = col; j>0; j -= j&-j) {
                ans += bit[i][j];
            }
        }
        return ans;
    }
public:
    NumMatrix(vector<vector<int>>& matrix) {
        n = matrix.size(), m = matrix[0].size();
        this->matrix.resize(n+1, vector<int>(m+1,0));
        bit.resize(n+1, vector<int>(m+1,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                update(i, j, matrix[i][j]);
            }
        }
    }
    
    void update(int x, int y, int val) {
        x++, y++;
        int inc = val-matrix[x][y];
        matrix[x][y] = val;
        int xdash = x;
        for(int i = x; i<=n; i += i&-i) {
            for(int j = y; j<=m; j += j&-j)
                bit[i][j] += inc;
        }
        return;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++, col1++, row2++, col2++;
        return sum(row2, col2) - sum(row2, col1-1) - sum(row1-1, col2) + sum(row1-1,col1-1);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * obj->update(row,col,val);
 * int param_2 = obj->sumRegion(row1,col1,row2,col2);
 */