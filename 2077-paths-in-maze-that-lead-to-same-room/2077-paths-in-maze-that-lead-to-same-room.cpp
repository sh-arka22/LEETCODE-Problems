class Solution {
public:
    int numberOfPaths(int n, vector<vector<int>>& es) {
        int ret = 0; 
        vector<bitset<1005>> g(n);
        vector<vector<int>> adjcents(n);
        for(auto&& e : es) {
            const int u = e[0] - 1; 
            const int v = e[1] - 1; 
            g[u][v] = 1;
            g[v][u] = 1;
            adjcents[u].push_back(v);
            adjcents[v].push_back(u);
        }
        for(auto&& e : es) {
            const int u = e[0] - 1; 
            const int v = e[1] - 1; 
            for(int i : adjcents[u]) {
                if(g[u][i] && g[i][v]) {
                    ret++;
                }
            }
        }
        return ret / 3; 
    }
};