class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int>graph[n];
        int indegree[n];
        fill(indegree, indegree+n, 0);
        
        for(auto &edge:edges){
            int v = edge[0], u = edge[1];
            graph[v].push_back(u);
            graph[u].push_back(v);
            indegree[u]++, indegree[v]++;
        }
        
        queue<int>que;
        for(int i=0;i<n;i++) if(indegree[i] == 1) que.push(i);
        
        while(que.size()){
            int sz = que.size();
            if(n==1){
                    return {que.front()};
                }
                if(n==2){
                    int first = que.front(); que.pop();
                    int second = que.front();
                    return {first,second};
                }
            for(int i=0;i<sz;i++){
                int parr = que.front();
                que.pop();
                n--;
                
                for(auto child:graph[parr]){
                    if(--indegree[child]==1)
                        que.push(child);
                }
            }
        }
        return {0};
    }
};