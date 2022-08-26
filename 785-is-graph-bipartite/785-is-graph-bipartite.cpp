class Solution {
public:
    int vis[101];
    bool bfs(vector<vector<int>>& graph, int src){
        queue<int>que;
        que.push(src);
        // vis[src] = 0;
        //0->green 1->red;
        int clr = 0;
        bool isCycle = false; bool isBipartite = true;
        while(que.size()){
            int sz = que.size();
            while(sz--){
                int parr = que.front();
                que.pop();
                if(vis[parr] != -1){
                    isCycle = true;
                    if(vis[parr] != clr){
                        isBipartite = false;
                        return false;
                    }
                    continue;
                }
                vis[parr] = clr;
                for(int child:graph[parr]){
                    if(vis[child] == -1)
                        que.push(child);
                }
            }
            clr = (clr+1)%2;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        fill(vis,vis+v,-1);
        for(int i=0;i<v;i++){
            if(vis[i] == -1 and !bfs(graph,i))
                return false;
        }
        return true;
    }
};