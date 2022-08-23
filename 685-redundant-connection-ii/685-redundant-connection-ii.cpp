class Dsu{
    public:
    vector<int> p;
    Dsu(int n){
        p.resize(n);
        iota(p.begin(),p.end(),0);
    }
    int get(int n){
        if(p[n] == n) return n;
        return p[n] = get(p[n]);
    }
    
    bool unite(int a,int b){
        int p1 = get(a);
        int p2 = get(b);
        if(p1 == p2) return false;
        p[p2] = p1;
        return true;
    }
};

class Solution {
public:
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> Indegree(n+1,0);
        for(int i = 0 ; i < n ; i++){
            Indegree[edges[i][1]]++;
        }
        vector<vector<int>> LastNodes;
        for(int i = 0 ; i < edges.size() ; i++){
            if(Indegree[edges[i][1]] > 1){
                LastNodes.push_back(edges[i]);
            }
        }
        Dsu d(n+1);
        
        for(int i = 0 ; i < n ; i++){
            if(LastNodes.size() > 0 && (edges[i] == LastNodes[0] || edges[i] == LastNodes[1])){
                continue;
            }
            if(!d.unite(edges[i][0],edges[i][1]))
                return edges[i];
        }
        if(!d.unite(LastNodes[0][0],LastNodes[0][1]))
            return LastNodes[0];
        else
            return LastNodes[1];
    }
};