class Solution {
private:
    const static int N = 1e3+1;
    long long dp[N][N];
long long tabu(string s, string t, int N, int M){
    for(int n=0; n<=N; n++){
        for(int m=0; m<=M; m++){
            if(n<m){
                dp[n][m] = 0;
                continue;
            }
            if(m==0){
                dp[n][m] = 1;
                continue;
            }
            if(s[n-1] == t[m-1]){
                dp[n][m] =  (dp[n-1][m-1]+dp[n-1][m])% 1000000007;
            }
            else{
                dp[n][m] = dp[n-1][m];
            }
        }
    }
    return dp[N][M];
}
public:
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                dp[i][j] = -1;
            }
        }
        return tabu(s,t,n,m);
    }
};