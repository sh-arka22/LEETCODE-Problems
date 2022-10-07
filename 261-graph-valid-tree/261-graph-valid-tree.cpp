class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size() != n-1) return 0;
        vector<int>graph[n];
        for(auto edge : edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        deque<int>que;
        set<int>vis;
        que.push_back(0);
        vis.insert(0);
        int cnt = 0;
        while(que.size()){
            int node = que.front();
            que.pop_front();
            cnt++;
            for(int child: graph[node]){
                if(vis.count(child)) continue;
                vis.insert(child);
                que.push_back(child);
            }
        }
        return cnt==n;
    }
};