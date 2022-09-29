class Solution {
        vector<int> parent;
public:
    int find(int p) {
        while (p != parent[p]) {
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    }
    
    void connect(int p, int q) {
        int i = find(p);
        int j = find(q);
        parent[i] = j;
    }
    
    vector<int> amountPainted(vector<vector<int>>& paint) {
        int rBound = 0;
        for (const auto& p: paint) {
            rBound = max(p[1], rBound);
        }
        parent = vector<int>(rBound + 1, 0);
        iota(parent.begin(), parent.end(), 0);
        
        vector<int> ans;
        
        for (const auto& p: paint) {
            int l = p[0], r = p[1];
            int a = 0;
            for (l = find(l); l < r; l = find(l)) {
                ++a;
                connect(l, l + 1);
            }
            ans.push_back(a);
        }
        
        return ans;
    }
};