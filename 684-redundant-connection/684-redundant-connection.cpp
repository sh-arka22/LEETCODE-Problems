class Solution {
private:
    vector<int> parrent;
    int findParrent(int v){
        return parrent[v] == v ? v : parrent[v] = findParrent(parrent[v]);
    }
    
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int e = edges.size()+1;
        for(int i=0;i<e;i++) parrent.push_back(i);
        
        for(auto &edge: edges){
            int v = edge[0], u = edge[1];
            int p1 = findParrent(v);
            int p2 = findParrent(u);
            
            if(p1 != p2){
                parrent[p1] = p2;
            }
            else{
                return edge;
            }
        }
        return {};
    }
};