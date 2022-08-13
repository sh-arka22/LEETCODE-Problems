class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<int>graph[n];
        
        for(vector<int> c:connections){
            graph[c[0]].push_back(c[1]);
            graph[c[1]].push_back(-c[0]);
        }
        
        queue<int>que;
        
        que.push(0);
        int vis[n];
        fill(vis,vis+n, -1);
        vis[0] = 0;
        
        int cnt = 0;
        while(que.size()){
            int sz = que.size();
            int parr = que.front();
            que.pop();
            for(int child:graph[parr]){
                    if(vis[abs(child)] == -1){
                        cnt += (child>=0);
                        que.push(abs(child));
                        vis[abs(child)] = abs(child);
                    }
                }
//             while(sz--){
                
//             }
        }
        return cnt;
    }
};