class Solution {
public:
    void dfs(vector<int>graph[], int v, int vis[]){
        vis[v] = 1;
        for(auto child: graph[v]){
            if(!vis[child])
                dfs(graph, child, vis);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<int>graph[v];
        for(int i=0;i<v;i++){
            for(int j=i+1;j<v;j++){
                if(isConnected[i][j]){
                    graph[i].push_back(j);
                    graph[j].push_back(i);
                }
            }
        }
        int vis[v];
        fill(vis, vis+v, 0);
        int cnt = 0;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                dfs(graph, i, vis);
                cnt++;
            }
        }
        return cnt;
    }
};