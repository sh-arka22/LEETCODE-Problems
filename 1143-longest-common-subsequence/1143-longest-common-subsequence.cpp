class Solution {
public:
    const static int N = 1e3+3;
    int dp[N][N];
    int tabu(string s1, string s2, int N, int M){
    for(int n=0; n<=N; n++){
        for(int m=0; m<=M; m++){
            if(n == 0 or m == 0){
                dp[n][m] = 0;
                continue;
            }
            if(s1[n-1] == s2[m-1]){
                dp[n][m] = dp[n-1][m-1]+1;
            }
            else {
                dp[n][m] = max(dp[n-1][m], dp[n][m-1]);
            }
        }
    }
    return dp[N][M];
}

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();
        for(int i = 0;i<=n;i++){
            for(int j=0;j<=m;j++){
                dp[i][j] = -1;
            }
        }
        return tabu(text1, text2, n,m);
    }
};