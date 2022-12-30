class Solution {
private:
    unordered_map<string, int>mp;
	int recc(vector<int> prices, int idx, int state, int k){
		string key = to_string(idx) + "|" + to_string(state) + "|" + to_string(k);
		if(idx == prices.size() or k == 0) return 0;
		if(mp[key] != 0) return mp[key];
		int profit = 0;
		if(state == 0){
			// i can buy
			profit = max(recc(prices, idx+1, 0, k), recc(prices, idx+1, 1, k) - prices[idx]);
		}
		else if(state == 1){
			// k-1
			// i know ican only sell
			profit = max(recc(prices, idx+1, 1, k), prices[idx] + recc(prices, idx+1, 0, k-1));
		}
		mp[key] = profit;
		return profit;
	} 
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        return recc(prices, 0, 0, k);
    }
};