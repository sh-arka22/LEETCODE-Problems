class Solution {
private:
    bool bfs(vector<vector<int>>& graph, int vis[], int v){

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
                    if(vis[child] == -1)
                        que.push_back(child);
                }
            }
            clr = (clr + 1)%2;
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        int vis[v];
        fill(vis, vis+v, -1);
        for(int i=0; i<v; i++){
            if(vis[i] == -1 and !bfs(graph, vis, i))
                return false;
        }
        return true;
    }
};