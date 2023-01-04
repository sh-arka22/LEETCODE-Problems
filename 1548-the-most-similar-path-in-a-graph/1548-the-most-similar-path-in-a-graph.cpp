class Solution {
public:
    vector<int> mostSimilar(int n, vector<vector<int>>& roads, vector<string>& names, vector<string>& targetPath) {
        int m = size(targetPath);
        vector<int>graph[n];
        for(auto road:roads){
            int u = road[0], v = road[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        set<array<int, 3>>pq;
        vector<vector<int>>dp(n, vector<int>(m, 1e9));
        vector<vector<int>>parr(n, vector<int>(m, -1));
        for(int i=0;i<n;i++){
            pq.insert({dp[i][0] = targetPath[0] == names[i] ? 0 : 1, i, 0});
        }

        int end;
        while(pq.size()){
            auto [wsf, i, j] = *pq.begin();
            pq.erase(pq.begin());
            if(j==m-1) {end = i; break;}
            for(int child: graph[i]){
                int nwsf = wsf + (names[child] == targetPath[j+1] ? 0 : 1);
                if(dp[child][j+1] > nwsf){
                    dp[child][j+1] = nwsf;
                    parr[child][j+1] = i;
                    pq.insert({nwsf, child, j+1});
                }
            }
        }

        vector<int>res;
        int steps = m, k = end;
        while(k != -1){
            res.push_back(k);
            k = parr[k][--steps];
        }
        reverse(begin(res), std::end(res));
        return res;
    }
};