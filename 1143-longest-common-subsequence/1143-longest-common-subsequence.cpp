class Solution {
private:
vector<vector<int>>dp;
int recc(string s, string t, int N, int M){
    for(int n = 0; n <= N; n++){
        for(int m = 0; m <= M; m++){
            if(n==0 or m==0){
                dp[n][m] = 0;
                continue;
            }
            if(s[n-1] == t[m-1]){
                dp[n][m] = dp[n-1][m-1] + 1;
            }
            else{
                dp[n][m] = max(dp[n-1][m], dp[n][m-1]);
            }
        }
    }
    return dp[N][M];
}

    int lcs(string s, string t){
        int n = s.size(), m = t.size();
        dp.resize(n+1, vector<int>(m+1,0));
        int ans = recc(s,t, n,  m);
        return ans;
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        return lcs(text1, text2);
    }
};