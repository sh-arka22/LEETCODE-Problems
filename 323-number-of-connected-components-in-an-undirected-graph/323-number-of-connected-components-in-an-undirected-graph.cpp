class Solution {
public:
    const static int N = 1e4;
    int parr[N];
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        for(int i=0;i<n;i++) parr[i] = i;
        
        int componenets = n;
        
        for(vector<int>edge:edges){
            int v = edge[0], u = edge[1];
            int p1 = findParr(v);
            int p2 = findParr(u);
            
            if(p1 != p2){
                componenets--;
                parr[p2] = p1;
            }
        }
        return componenets;
    }
};