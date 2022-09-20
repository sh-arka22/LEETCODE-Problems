class Solution {
private:
    vector<vector<int>>dp;
    int tabu(vector<int>& cuts, int SI, int EI){
    for(int gap=0;gap<=EI ;gap++){
        for(int si = SI, ei=gap; ei<=EI; si++, ei++){
            if(ei-si == 1){
                dp[si][ei] = 0;
                continue;
            }
            int mini = (int)1e9;
            for(int cut = si+1; cut<ei; cut++){
                int cost = cuts[ei] - cuts[si] + dp[si][cut] + dp[cut][ei];
                mini = min(mini, cost);
            }
            dp[si][ei] = mini;
       }
    }
    return dp[SI][EI];
}
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(n);
        cuts.insert(cuts.begin(), 0);
        sort(cuts.begin(), cuts.end());
        int c = cuts.size();
        dp.resize(c, vector<int>(c,-1));
        return tabu(cuts, 0, c-1);
    }
};