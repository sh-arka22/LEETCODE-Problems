class Solution {
private:
    int recc(int N, int K){
        int dp[1001][1001] = { 1 };
        for(int n=0;n<=N;n++){
            for(int k=0;k<=K;k++){
                if(n==0){
                    dp[n][k] = 0;
                    continue;
                }
                if(k==0){
                    dp[n][k]=1;
                    continue;
                }
                int inv = 0;
                for(int i=0;i<=min(k,n-1);i++){
                    inv = (inv + dp[n-1][k-i])%1000000007;
                }
                dp[n][k] = inv;
            }
        }
        return dp[N][K];
    }
public:
    int kInversePairs(int n, int k) {
        return recc(n, k);
    }
};