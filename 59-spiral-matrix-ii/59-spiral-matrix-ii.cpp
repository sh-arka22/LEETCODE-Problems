class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top = 0, right = n-1, bottom = n-1, left = 0;
        int dir = 4;
        vector<vector<int>>mat(n,vector<int>(n,0));
        int el = 1;
        while(left<=right and top<=bottom){
            if(dir % 4 == 0){
                for(int i=left;i<=right;i++){
                    mat[top][i]=el;
                    el++;
                }
                dir++;
                top++;
            }
            else if(dir % 4 == 1){
                for(int i=top;i<=bottom;i++){
                    mat[i][right]=el;
                    el++;
                }
                right--;
                dir++;
            }
            else if(dir % 4 == 2){
                for(int i=right;i>=left;i--){
                    mat[bottom][i]=el;
                    el++;
                }
                bottom--;
                dir++;
            }
            else if(dir % 4 == 3){
                for(int i=bottom;i>=top;i--){
                    mat[i][left]=el;
                    el++;
                }
                dir++;
                left++;
            }
        }
        return mat;
    }
};