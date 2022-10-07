class Solution {
private:
    void dfs(vector<int>graph[], int vis[], int v){
        vis[v] = 1;
        for(int u:graph[v]){
            if(vis[u]) continue;
            dfs(graph, vis, u);
        }
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int>graph[n];
        for(auto edge : edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        int cnt = 0; 
        int vis[n];
        fill(vis, vis+n, 0);
        for(auto i=0;i<n;i++){
            if(vis[i]) continue;
            vis[i] = 1;
            dfs(graph, vis, i);
            cnt++;
        }
        return cnt;
    }
};