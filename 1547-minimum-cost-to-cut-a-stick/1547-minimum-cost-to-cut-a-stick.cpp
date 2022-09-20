class Solution {
private:
    vector<vector<int>>dp;
    int recc(vector<int>& cuts, int si, int ei){
        if(ei-si == 1) return dp[si][ei] = 0;
        if(dp[si][ei] != -1) return dp[si][ei];
        int mini = (int)1e9;
        for(int cut = si+1; cut<ei; cut++){
            int cost = cuts[ei] - cuts[si] + recc(cuts, si, cut) + recc(cuts, cut, ei);
            mini = min(mini, cost);
        }
        return dp[si][ei] = mini;
    }
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(n);
        cuts.insert(cuts.begin(), 0);
        sort(cuts.begin(), cuts.end());
        int c = cuts.size();
        dp.resize(c, vector<int>(c,-1));
        return recc(cuts, 0, c-1);
    }
};