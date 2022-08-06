class Solution {
public:
    int treeDiameter(vector<vector<int>>& edges) {
        int n = edges.size()+1;
        
        vector<int> graph[n];
        int indegree[n];
        fill(indegree, indegree+n,0);
        for(int i=0;i<n-1;i++){
            int v = edges[i][0];
            int u = edges[i][1];
            graph[v].push_back(u);
            graph[u].push_back(v);
            indegree[v]++, indegree[u]++;
        }
        
        queue<int>que;
        
        for(int i=0;i<n;i++){
            if(indegree[i] == 1){
                que.push(i);
            }
        }
        
        int rad = 0;
        while(que.size()){
            int sz = que.size();
            if(n == 2) return rad*2 + 1;
            if(n == 1) return rad*2;
            while(sz--){
                int leaf = que.front();
                que.pop();
                n--; // one leaf node got processed
                for(auto child : graph[leaf]){
                    if(--indegree[child] == 1){
                        que.push(child);
                    }
                }
            }
            rad++;
        }
        return 0;
    }
};