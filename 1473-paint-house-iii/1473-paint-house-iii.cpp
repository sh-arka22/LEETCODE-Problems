class Solution {
private:
    vector<vector<vector<int>>>dp;
    int recc(vector<int>& houses, vector<vector<int>>& cost, int idx, int target, int prevClr, int n){
        if(target<0) return 1e9;
        if(idx>=size(houses)){
            return (target==0 ? 0 : 1e9);
        }
        if(dp[idx][target][prevClr] != -1) return dp[idx][target][prevClr];
        if(houses[idx] != 0){
            if(prevClr != houses[idx]){
                target--;
            }
            return recc(houses, cost, idx+1, target, houses[idx], n);
        }
        int ans = 1e9;
        for(int clr=1;clr<=n;clr++){
            int faith = recc(houses, cost, idx+1, target-(clr != prevClr), clr, n);
            ans = min(ans, cost[idx][clr-1]+faith);
        }
        return dp[idx][target][prevClr] = ans;
    }
public:
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        dp.resize(m+1, vector<vector<int>>(target+1, vector<int>(n+1, -1)));
        return recc(houses, cost, 0, target, 0, n)==1e9 ? -1: recc(houses, cost, 0, target, 0, n);
    }
};