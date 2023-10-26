class Solution {
private:
    void dijkstra(vector<pair<int, int>> *graph, int src, vector<long long>& dis){
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
        pq.push({0, src});
        dis[src] = 0;

        while(pq.size()){
            auto [wsf, node] = pq.top();
            pq.pop();
            if(dis[node] < wsf) continue;
            for(auto [nbr, w]: graph[node]){
                if(dis[nbr] > w + wsf){
                    dis[nbr] = w + wsf;
                    pq.push({dis[nbr], nbr});
                }
            }
        }
    }
public:
    long long minimumWeight(int n, vector<vector<int>>& edges, int src1, int src2, int dest) {

        vector<pair<int, int>> graph[n], rev_graph[n];

        for(auto edge: edges){
            int u = edge[0], v = edge[1], w = edge[2];
            graph[u].push_back({v, w});
            rev_graph[v].push_back({u, w});
        }

        vector<long long> disA(n, 1e17), disB(n, 1e17), disC(n, 1e17);
        long long res = 1e17;
        dijkstra(graph, src1, disA);
        dijkstra(graph, src2, disB);
        dijkstra(rev_graph, dest, disC);

        if(disC[src1] == 1e17 or disC[src2] == 1e17) return -1;

        for(int i=0; i<n; i++){
            res = min(res, disA[i] + disB[i] + disC[i]);
        }
        return res;
    }
};