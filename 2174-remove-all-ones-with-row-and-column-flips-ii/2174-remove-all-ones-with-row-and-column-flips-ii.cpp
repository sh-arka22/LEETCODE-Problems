class Solution {
public:
    int removeOnes(vector<vector<int>>& g, int mi = 0, int mj = 0) {
    int m = g.size(), n = g[0].size(), res = 16, ones = 0;
    for(int i = 0; i < m; ++i)
        if ((mi & (1 << i)) == 0)
            for(int j = 0; j < n; ++j)
                if ((mj & (1 << j)) == 0 && g[i][j]) {
                    ++ones;
                    res = min(res, 1 + removeOnes(g, mi + (1 << i), mj + (1 << j)));
                }
    return ones == 0 ? 0 : res;
}
};