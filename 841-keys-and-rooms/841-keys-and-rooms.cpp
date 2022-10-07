class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int>graph[n];
        for(int r=0;r<n;r++){
            for(auto k:rooms[r]){
                graph[r].push_back(k);
            }
        }
        unordered_set<int>seen;
        deque<int>que;
        que.push_back(0);
        seen.insert(0);
        
        while(que.size()){
            int node = que.front();
            que.pop_front();
            for(auto child: graph[node]){
                if(seen.count(child))continue;
                seen.insert(child);
                que.push_back(child);
            }
        }
        return seen.size()==n;
    }
};