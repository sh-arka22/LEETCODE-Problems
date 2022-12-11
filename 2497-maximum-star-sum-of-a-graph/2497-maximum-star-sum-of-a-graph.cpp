class Solution {
public:
    int maxStarSum(vector<int>& vals, vector<vector<int>>& edges, int k) {
        int n = size(vals);
        vector<vector<int>>graph(n);
        for(auto edge:edges){
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int maxi = -1e9;
        for(int i=0;i<n;i++){
            priority_queue<int>pq;
            for(int child:graph[i]){
                pq.push(vals[child]);
            }
            int sum = vals[i];
            int tmp = k;
            while(tmp-- and pq.size()){
                maxi = max(maxi,sum);
                sum+=pq.top();
                pq.pop();
            }
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};