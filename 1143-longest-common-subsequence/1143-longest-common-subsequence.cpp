class Solution {
private:
    vector<vector<int>>dp;
    int recc(string s, int N, string t, int M){
        for(int n=0;n<=N; n++){
            for(int m=0; m<=M; m++){
                if(n==0 or m==0){
                    dp[n][m] = 0;
                    continue;
                }
                int len = 0;
                if(s[n-1] == t[m-1]){
                    len = dp[n-1][m-1]+ 1;
                }
                else len = max(dp[n-1][m], dp[n][m-1]);
                dp[n][m] = len;
            }
        }
        return dp[N][M];
    }

    int lcs(string s, string t){
        int n = s.size(), m = t.size();
        dp.resize(n+1, vector<int>(m+1,0));
        int ans = recc(s, n, t, m);
        dp.clear();
        return ans;
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        return lcs(text1, text2);
    }
};