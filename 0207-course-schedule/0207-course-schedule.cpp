class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int v = numCourses;
        int indeg[v];
        fill(indeg, indeg+v, 0);
        vector<int>graph[v];
        for(vector<int>edge:prerequisites){
            indeg[edge[0]]++;
            graph[edge[1]].push_back(edge[0]);
        }
        
        queue<int>que;
        
        for(int i=0;i<v;i++){
            if(indeg[i] == 0) que.push(i);
        }
        vector<int>processed;
        
        while(que.size()){
            int sz = que.size();
            while(sz--){
                int top = que.front();
                que.pop();
                processed.push_back(top);
                for(auto child: graph[top]){
                    if(--indeg[child] == 0)
                        que.push(child);
                }
            }
        }
        return processed.size() == v ? 1 : 0;
    }
};