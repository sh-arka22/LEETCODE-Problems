class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int>pq;
        int maxReach = startFuel;
        int cnt = 0;
        int idx = 0;
        while(maxReach<target){
            while(idx<stations.size() and stations[idx][0]<=maxReach){
                pq.push(stations[idx][1]);
                idx++;
            }
            if(!pq.size()) return -1;
            maxReach+=pq.top();
            pq.pop();
            cnt++;
        }
        return cnt;
    }
};