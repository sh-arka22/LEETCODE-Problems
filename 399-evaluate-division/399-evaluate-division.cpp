class Solution {
public:
    unordered_map<string,unordered_map<string,double>>graph;
    double dfs(string start, string end,double curr, unordered_map<string,int>vis, bool &flag){
        vis[start]++;
        if(start == end){
            flag = true;
            return curr;
        }
        double ans = -1;
        for(auto it:graph[start]){
            if(vis.count(it.first)) continue;
            if(!flag){
                curr*=it.second;
                ans = dfs(it.first,end,curr,vis,flag);
                curr/=it.second;
            }
        }
        return ans;
    }
    
    vector<double> calcEquation(vector<vector<string>>& eq, vector<double>& val, vector<vector<string>>& queries) {
        
        int n = val.size();
        
        for(int i=0;i<n;i++){
            graph[eq[i][0]].insert({eq[i][1],val[i]});
            graph[eq[i][1]].insert({eq[i][0],1/val[i]});
        }
        
        vector<double>ans;
        unordered_map<string,int>vis;
        for(auto q: queries){
            string start = q[0];
            string end = q[1];
            if(graph.count(start) == 0){
                ans.push_back(-1);
                continue;
            }
            bool flag = false;
            double res = dfs(start,end,1,vis,flag);
            ans.push_back(res);
            vis.clear();
        }
        
        
        return ans;
    }
};