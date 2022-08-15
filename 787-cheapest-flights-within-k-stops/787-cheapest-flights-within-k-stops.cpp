class Solution {
public:
    /*
    DP SOLUTION
    */
    int recur(vector<vector<int>> &g, int s, int d, int k,vector<vector<vector<int>>> &dp) {
    if(s == d)
        return 0;
    if(k == 0 and g[s][d] != INT_MAX)
        return g[s][d];
    if(k <= 0)
        return INT_MAX;
    
    if(dp[s][d][k] != -1)
        return dp[s][d][k];
    
    int res = INT_MAX;
    
    for(int i = 0; i < g.size(); i++) {
        if(g[s][i] != INT_MAX and s != i) {
            int temp = recur(g, i, d, k-1, dp);
            if(temp != INT_MAX) {
                res = min(res, g[s][i] + temp);
            }
        }
    }
    dp[s][d][k] = res;
    return res;
}

int findCheapestPrice(int n, vector<vector<int>>& flights, int s, int d, int k) {
    
    vector<vector<int>> g(n, vector<int>(n, INT_MAX));
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(k+1, -1)));
    
    for(vector<int> edge: flights) {
        g[edge[0]][edge[1]] = edge[2];
    }
    
    int res = recur(g, s, d, k, dp);
    if(res == INT_MAX)
        return -1;
    return res;
}
};