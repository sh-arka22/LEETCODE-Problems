class Solution {
public:
    const static int N = 1e3+5;
    int parr[N];
    int size[N];
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    bool union_(int v, int u){
        int p1 = findParr(v);
        int p2 = findParr(u);
        
        if(p1 != p2){
            if(size[p1]>size[p2]){
                parr[p2] = p1;
                size[p1] += size[p2];
            }
            else {
                parr[p1] = p2;
                size[p2] += size[p1];
            }
            return false; // no cycle
        }
        return true;
    }
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        
        int vn = edges.size();
        int indegree[vn+1];
        fill(indegree, indegree+vn+1, -1);
        
        vector<int> mayBe1 = {-1,-1} ,mayBe2 = {-1,-1};
        
        for(auto &edge:edges){
            int v = edge[0];
            int u = edge[1];
            
            if(indegree[u] == -1){
                indegree[u] = v; // storing the node caused the indegree
            }
            else{
                mayBe1 = {v,u};
                mayBe2 = {indegree[u],u};
                break;
            }
        }
        
        for(int i=1;i<=vn;i++){
            parr[i] = i;
            size[i] = 1;
        }
        
        for(auto &edge:edges){
            if(mayBe1 == edge) continue;
            
            int v = edge[0], u = edge[1];
            
            bool hasCycle = union_(v, u);
            
            if(hasCycle){
                if(mayBe1[0] == -1){
                    /**
                    case 2
                    */
                    return edge;
                }
                else{
                    /**
                    
                    */
                    return mayBe2;
                }
            }
        }
        return mayBe1;
    }
};