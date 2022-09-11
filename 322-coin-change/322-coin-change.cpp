class Solution {
private:
    vector<vector<int>>dp;
    int recc(vector<int> &num, int tar, int n){
        if(n==0){
            if(tar % num[0] == 0) return dp[n][tar] = tar/num[0];
            return dp[n][tar] = (int)1e9;
        }
        if(dp[n][tar] != -1) return dp[n][tar];
        int pick = (int)1e9;
        if(tar>=num[n]){
            pick = recc(num, tar-num[n], n)+1;
        }
        int notPick = recc(num, tar, n-1);

        return dp[n][tar] = min(pick, notPick);
    }

int minimumElements(vector<int> &num, int x){
        // Write your code here.
        int n = num.size();
        dp.resize(n, vector<int>(x+1, -1));
        int ans = recc(num, x, n-1) == (int)1e9 ? -1 : recc(num, x, n-1);
        dp.clear();
        return ans;
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        return minimumElements(coins, amount);
    }
};