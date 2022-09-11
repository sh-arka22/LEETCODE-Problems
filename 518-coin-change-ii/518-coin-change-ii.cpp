class Solution {
private:
    vector<vector<int>>dp;
    long recc(vector<int> &arr, int N, int Val){
        for(int n=0;n<=N;n++){
            for(int val=0;val<=Val;val++){
                if(n == 0){
                    if(val%arr[0] == 0){
                        dp[n][val] = 1;
                        continue;
                    }
                    dp[n][val] = 0;
                    continue;
                }
                long count = 0;
                if(arr[n]<=val){
                    count = dp[n][val-arr[n]];
                }
                count+= dp[n-1][val];
                dp[n][val] = count;
            }
        }
        return dp[N][Val];
    }
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        dp.resize(n, vector<int>(amount+1,0));
        return recc(coins, n-1, amount);
    }
};