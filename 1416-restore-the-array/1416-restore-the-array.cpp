class Solution {
private:
    const int MOD = 1e9 + 7;
    vector<int>dp;
    int dfs(string& s, int idx, int k, int n) {
        if (idx >= n) {
            return 1;
        }
        if(s[idx] == '0') return 0;
        int cnt = 0;
        long long int num = 0;
        if(dp[idx] != -1) return dp[idx];
        for (int i = idx; i < n; i++) {
            num = num * 10 + (s[i] - '0');
            if(num>k) break; // this protects me from singned integer ver flow
            if(num<=k and num>0)
                cnt = (cnt + dfs(s, i + 1, k, n)) % MOD;
        }
        
        return dp[idx] = cnt % MOD;
    }
    
public:
    int numberOfArrays(string s, int k) {
        dp.resize(size(s)+1, -1);
        return dfs(s, 0, k, s.size());
    }
};