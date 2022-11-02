class Solution {
public:
    int countOrders(int n) {
        vector<long long>dp(2*n+1);
        dp[1] = 1;
        for(int i=2;i<=n;i++){
            int N = (2*i)-1;
            int sum = (N*(N+1))/2;
            dp[i] = (dp[i-1]*sum)%1000000007;
        }
        return dp[n];
    }
};