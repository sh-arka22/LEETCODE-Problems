class Solution {
public:
    bool sequenceReconstruction(vector<int>& nums, vector<vector<int>>& sequences) {
        int n = nums.size();
        vector<int> indeg(n + 1);
        vector<vector<int>> g(n + 1);
        for(auto &seq : sequences){
            int m = seq.size();
            for(int i = 0; i < m - 1; i++){
                indeg[seq[i + 1]]++;
                g[seq[i]].push_back(seq[i + 1]);
            }
        }
        
        
        queue<int> q;
        for(int i = 1; i <= n; i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }
        vector<int> top;
        while(q.size()){
            int lvl = q.size();
            if(lvl > 1) return false;;
            for(int i = 0; i < lvl; i++){
                int u = q.front(); q.pop();
                top.push_back(u);
                for(auto &v : g[u]){
                    indeg[v]--;
                    if(indeg[v] == 0){
                        q.push(v);
                    }
                }
            }
        }
        return top.size() == nums.size();
        
    }
};