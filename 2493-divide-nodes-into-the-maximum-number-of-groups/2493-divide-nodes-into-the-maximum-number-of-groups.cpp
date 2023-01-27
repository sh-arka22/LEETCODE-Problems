class Solution {
public:
    int bfs(vector<vector<int>> &adj, int curr, int n) {
        vector<bool> vis(n + 1, 0);
        queue<int> q;
        q.push(curr);
        vis[curr] = 1;
 
        int cnt = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int node = q.front();
                q.pop();
 
                for (auto nxt : adj[node]) {
                    if (vis[nxt] == 0) {
                        q.push(nxt);
                        vis[nxt] = 1;
                    }
                }
            }
            cnt++;
        }
        return cnt;
    }

    int maxDist(vector<vector<int>> &adj, int curr, vector<int> &vis, vector<int> &dist) {
        if (vis[curr])
            return dist[curr];
 
        vis[curr] = 1;
        int ma = dist[curr];
        for (auto nxt : adj[curr]) {
            ma = max(ma, maxDist(adj, nxt, vis, dist));
        }
 
        return ma;
    }
    int getMaxGroupCount(vector<vector<int>> &adj, int n) {
        vector<int> dist(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            dist[i] = (bfs(adj, i, n));
        }
 
        int ma = 0;
        vector<int> vis(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                ma += maxDist(adj, i, vis, dist);
            }
        }
        return ma;
    }
    bool bfs2(vector<vector<int>>& graph, vector<int>&vis, int v){
        int clr = 0;
        deque<int>que;
        que.push_back(v);
        while(que.size()){
            int sz = que.size();
            while(sz--){
                int node = que.front();
                que.pop_front();
                if(vis[node] != -1){
                    //cycle present
                    if(vis[node] != clr){
                        return false;
                    }
                    continue;
                }
                vis[node] = clr;
                for(int child:graph[node]){
                    if(vis[child] == -1)//cant move backward
                        que.push_back(child);
                }
            }
            clr = (clr + 1)%2;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph, vector<int>&vis) {
        int v = graph.size();
        // int vis[v];
        for(int i=0; i<v; i++){
            if(vis[i] == -1 and !bfs2(graph, vis, i))
                return false;
        }
        return true;
    }
    int magnificentSets(int n, vector<vector<int>> &edges) {
        vector<vector<int>> adj(n + 1);
 
        //formed the graph
        for (auto i : edges) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        //made the visited array
        vector<int> vis(n + 1, -1);

        //flag = false if we have odd lenth cycle
        bool flag = isBipartite(adj, vis);

        if (!flag)
            return -1;
 
        return getMaxGroupCount(adj, n);
    }
};