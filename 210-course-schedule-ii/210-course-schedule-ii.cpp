class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& edge) {
        int v = numCourses, e = edge.size();
        
        vector<int> graph [v];
        for(int i=0;i<e;i++){
            graph[edge[i][1]].push_back(edge[i][0]);
        }
        
        int indeg [v];
        fill(indeg,indeg+v,0);
        
        vector<int>topoSort;
        
        for(auto edgeList: graph){
            for(auto u: edgeList){
                indeg[u]++;
            }
        }
        
        queue<int> que;
        for(int i=0;i<v;i++){
            if(indeg[i] == 0){
                que.push(i);
            }
        }
        int level = 0;
        while(que.size()){
            int sz = que.size();
            while(sz--){
                int v = que.front();
                topoSort.push_back(v);
                que.pop();
                for(auto child:graph[v]){
                    if(--indeg[child] == 0){
                        que.push(child);
                    }
                }
            }
            level ++;
        }
        // reverse(topoSort.begin(), topoSort.end());
        if(topoSort.size() == v){
            return topoSort;
        }
        return {};
    }
};