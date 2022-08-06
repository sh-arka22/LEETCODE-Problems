class Solution {
private:
    vector<int>vis;
    int dfs(vector<vector<int>>& graph, int v){
        if(vis[v] == 1){
            vis[v] = -1;
            return -1;
        }
        if(vis[v] == 2){
            return 2;
        }
        vis[v] = 1; //marked the starting path
        for(int child:graph[v]){
            if(dfs(graph,child) == -1){
                vis[v] = -1;
                vis[child] = -1;
                return -1;
            }
        }
        return vis[v] = 2;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        // 0-> unvisted   1-> assume visisted but not in cycle    -1-> visited and in cycle  2->visited and sure not a part of cycle
        vector<int>ans;
        int n = graph.size();
        vis.resize(n,0);
        for(int v=0;v<n;v++){
            if(vis[v] == 0){
                int flag = dfs(graph,v);
                // if(dfs(graph,v) == 2){
                //     ans.push_back(v);
                // }   
            }
        }
        
        for(int i = 0;i<n;i++){
            if(vis[i]==2){
                ans.push_back(i);
            }
        }
        for(auto it:vis){
            cout<<it<<" ";
        }
        return ans;
    }
};