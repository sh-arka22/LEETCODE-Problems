class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        for(int i=1;i<n;i++){
            int diff = prices[i]-prices[i-1];
            profit += (diff>0 ? diff : 0);
        }
        return profit;
    }
};