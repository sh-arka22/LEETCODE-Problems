class Solution {
private:
    vector<vector<int>>dp;
    int recc(vector<int> &num, int Tar, int N){
        for(int n=0;n<=N;n++){
            for(int tar=0;tar<=Tar;tar++){
                if(n==0){
                    if(tar % num[0] == 0){
                        dp[n][tar] = tar/num[0];
                        continue;
                    }
                    dp[n][tar] = (int)1e9;
                    continue;
                }
                int pick = (int)1e9;
                if(tar>=num[n]){
                    pick = dp[n][tar-num[n]]+1;
                }
                int notPick = dp[n-1][tar];
                dp[n][tar] = min(pick, notPick);
            }
        }
        return dp[N][Tar];
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