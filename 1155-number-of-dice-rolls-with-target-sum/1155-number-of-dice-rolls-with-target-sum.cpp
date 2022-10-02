class Solution{
private:
    vector<vector<int>>dp;
    int knapSack(vector<int>coins, int tar, int n){
        if(n==0 or tar<=0){
            if(n==0 and tar==0) return 1;
            return 0;
        }
        if(dp[tar][n] != -1) return dp[tar][n];
        int cnt = 0;
        for(auto coin:coins){
            if(tar-coin < 0) continue;
            cnt = (cnt + (knapSack(coins, tar-coin, n-1)%1000000007))%1000000007;
        }
        return dp[tar][n] = cnt;
    }

public:
    int numRollsToTarget(int n, int k, int tar) {
        vector<int>coins(k);
        vector<int>vis(k+1,0);
        dp.resize(1001, vector<int>(31,-1));
        for(int i=1;i<=k;i++) coins[i-1] = i;
        return knapSack(coins, tar, n);
    }
};