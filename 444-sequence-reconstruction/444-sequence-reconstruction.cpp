class Solution {
public:
    bool sequenceReconstruction(vector<int>& nums, vector<vector<int>>& sequences) {
        int n = nums.size();
        vector<int>graph[n+1];
        
        int indegree[n+1];
        fill(indegree,indegree+n+1,0);
        
        for(auto &seq : sequences){
            int m = seq.size();
            for(int i = 0; i < m - 1; i++){
                indegree[seq[i + 1]]++;
                graph[seq[i]].push_back(seq[i + 1]);
            }
        }
        
        queue<int>que;
        for(int i=1;i<=n;i++) if(indegree[i] == 0) que.push(i);
        
        vector<int>topo;
        while(que.size()){
            int sz = que.size();
            if(sz > 1) return false;
            while(sz--){
                int parr = que.front();
                que.pop();
                topo.push_back(parr);
                for(int child:graph[parr]){
                    if(--indegree[child]==0)
                        que.push(child);
                }
            }
        }
        return topo.size()==n;
    }
};