class Solution {
public:
    unordered_map<string,multiset<string>> graph;
    
    void dfs(string v, vector<string>&ans){
        while(graph[v].size()>0){
            string dest = *graph[v].begin();
            graph[v].erase(graph[v].begin());
            dfs(dest, ans);
        }
        ans.push_back(v);
    }
    
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        int n = tickets.size();
        for(auto edge:tickets){
            string v = edge[0], u = edge[1];
            graph[v].insert(u);
        }
        vector<string>ans;
        // ans.push_back("JFK");
        dfs("JFK",ans);
        reverse(begin(ans),end(ans));
        return ans;
    }
};