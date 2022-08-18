class Solution {
const int N = 1e3;
    vector<int>parr;
    vector<int>size;
int findParr(int v){
    return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
}
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int e = edges.size();
        
        for(int i=0;i<=e;i++){
            parr.push_back(i);
            size.push_back(1);
        }
        
        for(auto &edge:edges){
            int v = edge[0], u = edge[1];
            int p1 = findParr(v);
            int p2 = findParr(u);
            if(p1 != p2){
                parr[p1] = min(p1,p2);
                parr[p2] = min(p1,p2);
            }
            else{
                return edge;
            }
        }
        return {};
    }
};