class Solution {
public:
    const static int N = 1e3+3;
    int dp[N][N];
    int recc(string &s1, string &s2, int n, int m){
    if(n == 0 or m == 0){
        return dp[n][m] = 0;
    }
    if(dp[n][m] != -1) return dp[n][m];
    int cnt;
    if(s1[n-1] == s2[m-1]){
        cnt = recc(s1, s2, n-1, m-1)+1;
    }
    else {
        cnt = max(recc(s1, s2, n-1, m), recc(s1, s2, n, m-1));
    }
    return dp[n][m] = cnt;
}

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();
        for(int i = 0;i<=n;i++){
            for(int j=0;j<=m;j++){
                dp[i][j] = -1;
            }
        }
        return recc(text1, text2, n,m);
    }
};