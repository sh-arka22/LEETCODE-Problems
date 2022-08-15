class Solution {
public:
    const static int N = 1e3;
    int vis[N];
    vector<pair<int,int>>graph[N];
    set<pair<int,int>>st; //{wsf,v};
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        fill(vis,vis+N, -1);
        int e = times.size();
        for(int i=0;i<e;i++){
            vector<int>edge = times[i];
            int v = edge[0], u = edge[1], w = edge[2];
            graph[v].push_back({u,w});
        }
        
        st.insert({0,k});
        int maxi = INT_MIN;
        while(st.size()){
            auto node = *st.begin();
            int parr = node.second;
            int time = node.first;
            st.erase(st.begin());
            if(vis[parr] == 1) continue; //cycle prasent;
            vis[parr] = 1;
            maxi = max(maxi, time);
            for(auto child: graph[parr]){
                st.insert({time+child.second, child.first});
            }
        }
        for(int i=1;i<=n;i++){
            if(vis[i] == -1) return -1;
        }
        return maxi;
    }
};