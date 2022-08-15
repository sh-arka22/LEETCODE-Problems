static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
class Solution {
public:
    //optimidsed version
    const static int N = 1e3;
    vector<pair<int,int>>graph[N];
    set<pair<int,int>>st; //{w,v};
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int>dis(1e3,INT_MAX);
        int e = times.size();
        for(int i=0;i<e;i++){
            vector<int>edge = times[i];
            int v = edge[0], u = edge[1], w = edge[2];
            graph[v].push_back({u,w});
        }
        
        st.insert({0,k});
        dis[k] = 0;
        int maxi = 0;
        while(st.size()){
            auto node = *st.begin();
            int parr = node.second;
            int time = node.first;
            st.erase(st.begin());
            for(auto child: graph[parr]){
                if(dis[child.first] > dis[parr] + child.second){
                    dis[child.first] = dis[parr] + child.second;
                    st.insert({dis[child.first], child.first});
                }
            }
        }
        
        for(int i=1;i<=n;i++){
            if(dis[i] == INT_MAX) return -1;
            maxi = max(maxi,dis[i]);
        }
        return maxi;
    }
};