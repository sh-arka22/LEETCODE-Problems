class Solution {
private:
    using ll = long long int;
    vector<vector<ll>> dp;
    ll MaxPrice (int rows, int cols, const vector<vector<int>>& prices) {
        if (rows == 1 && cols == 1) {
            return prices[rows][cols];
        }
        
        if (dp[rows][cols] != -1) return dp[rows][cols];
         
        ll ans = prices[rows][cols];
        for (int row = 0; row < rows/2; row ++) {
            ans = max (ans, MaxPrice (row+1, cols, prices) + MaxPrice (rows-row-1, cols, prices));
        }
        for (int col = 0; col < cols/2; col ++) {
            ans = max (ans, MaxPrice (rows, col+1, prices) + MaxPrice (rows, cols-col-1, prices));
        }
        
        return dp[rows][cols] = ans;
    }
    
public:
    long long sellingWood(int m, int n, vector<vector<int>>& prices) {
        
        dp.resize(m+1, vector<ll>(n+1,-1));
        vector<vector<int>> price (m+1, vector<int>(n+1));
        for (auto i : prices) price[i[0]][i[1]] = i[2];
        
        return MaxPrice (m, n, price);
    }
};