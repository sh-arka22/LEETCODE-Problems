class Solution {
public:
    int minimumSemesters(int N, vector<vector<int>>& relations) {
        vector<int> indeg(N, 0);
        vector<set<int>> g(N);
        for (auto& v : relations) {
            g[v[0] - 1].insert(v[1] - 1);
            indeg[v[1] - 1]++;
        }
        
        int rad = 0, studied = 0;
        queue<int>que;
        
        for(int i=0;i<N;i++){
            if(indeg[i]==0)
                que.push(i);
        }
    /**
     * traversing the graph
     */
        vector<int>topoSort;
        while(que.size()){
            int sz = que.size();
            while(sz--){
                int v = que.front();
                topoSort.push_back(v);
                que.pop();
                studied++;
                for(auto child:g[v]){
                    //if indegree of the child if becomes 0 after -- we push in the queue
                    if(--indeg[child] == 0){
                        que.push(child);
                    }
                }
            }
            rad ++;
        }
        /**
         * if the size of the topoSorted array != the no of vertex so there is a cycle hence cannot be toposorted here
         */
        return studied != N ? -1 : rad;
    }
};