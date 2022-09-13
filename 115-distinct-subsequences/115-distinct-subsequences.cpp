class Solution {
public:
    vector<vector<long long>>dp;
    int recc(string &s, string &t, int N, int M){
        for(int n=0;n<=N;n++){
            for(int m=0;m<=M;m++){
                if(n==0 or m==0){
                    if(m==0){
                        dp[n][m] = 1;
                        continue;
                    }
                    if(n==0){
                        dp[n][m] = 0;
                        continue;
                    } 
                }
                int left = 0, right = 0;
                if(s[n-1] == t[m-1]){
                    left = dp[n-1][m-1];
                }
                right = dp[n-1][m];
                dp[n][m] = (left+right)%1000000007;
            }
        }
        return dp[N][M];
    }


    int numDistinct(string s, string t) {
        int n = s.size(), m = t.size();
        dp.resize(n+1,vector<long long>(m+1,0));
        return recc(s, t, n, m);
    }
};