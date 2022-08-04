class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<vector<int>>ans;
        
        queue<vector<int>>que;
        que.push({0});
        
        while(que.size()){
            int sz = que.size();
            while(sz--){
                auto tmp = que.front();
                que.pop();
                if(tmp.back() == v-1){
                    ans.push_back(tmp);
                }
                
                for(auto child:graph[tmp.back()]){
                    vector<int>path = tmp;
                    path.push_back(child);
                    que.push(path);
                }
            }
        }
        return ans;
    }
};