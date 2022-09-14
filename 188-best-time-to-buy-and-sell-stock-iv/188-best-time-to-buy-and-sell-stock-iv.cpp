class Solution {
private:
    vector<vector<vector<int>>>dp;
    int recc(vector<int>& prices, int idx, int k, int state, int n){
        if(n == idx or k == 0) return dp[idx][k][state] = 0;
        if(dp[idx][k][state] != -1) return dp[idx][k][state];
        int profit;
        if(state == 0){
            // i can buy;
            profit = max(recc(prices, idx+1, k, 0, n), -prices[idx] + recc(prices, idx+1, k, 1, n));
        }
        else if(state == 1){
            //i can sell
            profit = max(recc(prices, idx+1, k, 1, n), prices[idx]+ recc(prices, idx+1, k-1, 0, n));
        }
        return dp[idx][k][state] = profit;
    } 
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        dp.resize(n+1, vector<vector<int>>(k+1, vector<int>(2,-1)));
        return recc(prices, 0, k, 0, n);
    }
};