class Solution {
public:
    //USING DIJKTRAS
    set<tuple<int,int,int>>st;
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>graph(n);
        for(const auto&f:flights)   graph[f[0]].push_back({f[1],f[2]});
        
        st.insert(make_tuple(0,src,k+1));
        
        while(st.size()){
            auto[wsf, parr, stops] = *st.begin();
            st.erase(st.begin());
            if(parr == dst) return wsf;
            if(!stops) continue;
            for(auto &[u,w]:graph[parr]) st.insert(make_tuple(wsf+w,u,stops-1));
        }
        return -1;
    }
};