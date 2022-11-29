class Solution {
public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<int> row = GenerateTopologicalSort(rowConditions, k);
        vector<int> col = GenerateTopologicalSort(colConditions, k);
        if (row.size() < k || col.size() < k) return {};
        vector<vector<int>>ans(k, vector<int>(k));
        map<int,int>mp;
        for(int i=0;i<k;i++) mp[row[i]] = i;
        for(int i=0;i<k;i++){
            ans[mp[col[i]]][i] = col[i];
        }
        return ans;
    }
    vector<int> GenerateTopologicalSort(vector<vector<int>> &A, int k) {
        vector<int> deg(k, 0), order;
        vector<vector<int>> graph(k, vector<int>(0));
        queue<int> q;
        for (auto &c: A) {
            graph[c[0] - 1].push_back(c[1] - 1);
            deg[c[1] - 1]++;
        }
        for(int i = 0; i < k; i++) 
            if (!deg[i]) q.push(i);
        while (!q.empty()) {
            int x = q.front(); q.pop();
            order.push_back(x + 1);
            for (int& y: graph[x]) 
                if (--deg[y] == 0) 
                    q.push(y);
        }
        return order;
    }
};