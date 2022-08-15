class Solution {
public:
    //USING DIJKTRAS
    set<tuple<int,int,int>>st;
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>graph(n);
        for(const auto&f:flights)   graph[f[0]].push_back({f[1],f[2]});
        
        st.insert(make_tuple(0,src,k+1));
        
        int mini = INT_MAX;
        
        while(st.size()){
            auto[wsf, parr, stops] = *st.begin();
            st.erase(st.begin());
            
            /**
            Added extra
            */
            if(parr == dst) return mini = min(mini,wsf) ;
            if(!stops) continue;
            
            /**
            Not required vis bcs it is directed graph
            */
            
            for(auto &[u,w]:graph[parr]) st.insert(make_tuple(wsf+w,u,stops-1));
        }
        return mini == INT_MAX ? -1 : mini;
    }
};