class Solution {
private:
    vector<vector<int>>dp;
    int recc(vector<int>&v, int i, int j){
        if(i+1 == j) return 0;
        int res = 1e9;
        if(dp[i][j] != -1) return dp[i][j];
        for(int k=i+1;k<j;k++){
            res = min(res, v[i]*v[k]*v[j] + recc(v,i,k) + recc(v,k,j));
        }
        return dp[i][j] = res;
    }
public:
    int minScoreTriangulation(vector<int>& values) {
        int n = size(values);
        dp.resize(n+1, vector<int>(n+1, -1));
        return recc(values, 0, n-1);
    }
};