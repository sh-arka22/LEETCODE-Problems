class Solution {
private:
    const static int N = 1e3+1;
    int dp[N][N];
    long recc(string s, string t, int n, int m){
        if(n<m) return dp[n][m] = 0;
        if(m==0) return dp[n][m] = 1;
        if(dp[n][m] != -1) return dp[n][m];
        long cnt;
        if(s[n-1] == t[m-1]){
            cnt = (recc(s,t,n-1,m-1)+recc(s,t,n-1,m));
        }
        else{
            cnt = (recc(s,t,n-1,m));
        }

        return dp[n][m] = cnt;
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
        return recc(s,t,n,m);
    }
};