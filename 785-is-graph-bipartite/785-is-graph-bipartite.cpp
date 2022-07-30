class Solution {
    /*
     0->1->3->5
         \    |
          4->7
    */
private:
    int vis[100];
    bool bfs(vector<vector<int>>& graph, int src){
        queue<int>que;
        bool isCycle = false, isBipartite = true;
        que.push(src);
        int clr = 0;
        // -1->notcolored   0->green   1->blue
        while(que.size()){
            int sz = que.size();
            while(sz--){
                int parent = que.front();
                que.pop();
                if(vis[parent] != -1){
                    isCycle = true; //cycle is there
                    //now i have to cheak if it is odd length or even length
                    //conflict means the colour that was colored with != the curr colour
                    if(vis[parent] != clr)
                        isBipartite = false;
                    if(!isBipartite)
                        return false;
                    continue;
                }
                vis[parent] = clr;
                for(int child:graph[parent]){
                    if(vis[child] == -1){
                        que.push(child);
                    }
                }
            }
            //colored the parent node
            clr = (clr+1)%2;
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        fill(vis,vis+100, -1);
        int n = graph.size();
        for(int v=0;v<n;v++){
            if(vis[v] == -1 and !bfs(graph,v))
                return false;
        }
        return true;
    }
};