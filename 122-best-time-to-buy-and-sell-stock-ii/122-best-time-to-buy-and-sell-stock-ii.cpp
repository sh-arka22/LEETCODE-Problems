class Solution {
private:
    vector<vector<int>>dp;
    int recc(vector<int>& prices, int idx, int n, int state) {
        if(idx == n) return dp[idx][state] = 0;
        if(dp[idx][state] != -1) return dp[idx][state];
        int profit;
        if(state == 0){
            //buy state;
            profit = max(recc(prices, idx+1, n, 0), recc(prices, idx+1, n, 1) - prices[idx]);
        }
        else{
            //sell state;
            profit = max(recc(prices, idx+1, n, 1), prices[idx] + recc(prices, idx, n, 0));
        }
        return dp[idx][state] = profit;
    }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        dp.resize(n+1, vector<int>(2,-1));
        return recc(prices, 0, n , 0);
    }
};