class Solution {
public:
    
    //BFS SOLUTION O(e*k)
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int, int>>> graph(n);
        for(auto e : flights) {
            graph[e[0]].push_back({e[1], e[2]});
        }
        int ans=INT_MAX;
        vector<int> dist(n, INT_MAX);
        queue<pair<int, int>> q;
        q.push({src, 0});
        int stops=1;
        while(!q.empty()) {
            int sz=q.size();
            while(sz--) {
                auto [parr,wsf] = q.front();
                q.pop();
                if(wsf>dist[parr]) continue;
                dist[parr]=wsf;
                for(auto [child,w] : graph[parr]) {
                    if(w+wsf > ans) continue;
                    if(child==dst) ans=min(ans, w+wsf);
                    q.push({child, w+wsf});
                }
            }
            if(stops++ > k) break;
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};