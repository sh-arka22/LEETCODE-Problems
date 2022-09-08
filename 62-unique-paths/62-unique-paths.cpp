class Solution {
public:
vector<vector<int>>dp;
int recc(int n, int m){
    if(n==0 or m==0) return dp[n][m] = 1;
    if(dp[n][m] != -1) return dp[n][m];
    int left = recc(n-1,m);
    int right = recc(n,m-1);

    return dp[n][m] = (left + right);
}
int uniquePaths(int m, int n) {
    dp.resize(m, vector<int>(n,-1));
    return recc(m-1,n-1);
	// Write your code here.
}
};