class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int src, int tar) {
        map<int,vector<int>>to_routes;
        for(int i=0;i<routes.size();i++){
            for(int stops: routes[i]){
                to_routes[stops].push_back(i);
            }
        }
        set<int>vis;
        vis.insert(src);
        deque<int>que;
        que.push_back(src);
        int rad = 0;
        while(que.size()){
            int sz = que.size();
            while(sz--){
                int stop = que.front();
                que.pop_front();
                if(stop == tar) return rad;
                for(int path: to_routes[stop]){
                    for(int station: routes[path]){
                        if(vis.count(station)) continue;
                        que.push_back(station);
                        vis.insert(station);
                    }
                    routes[path].clear(); // not using gives TLE
                }
            }
            rad++;
        }
        return -1;
    }
};