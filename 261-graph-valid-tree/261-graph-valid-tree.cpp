class Solution {
public:
    const static int N = 1e4;
    int parr[N];
    int size[N];
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        
        if(edges.size() == 0 and n == 1) return 1;
        
        for(int i= 0;i<n;i++) parr[i] = i;
        for(int i=0;i<n;i++) size[i] = 1;
        
        int maxi = 0;
        
        for(vector<int>edge:edges){
            
            int v = edge[0], u = edge[1];
            
            int p1 = findParr(v);
            int p2 = findParr(u);
            
            if(p1 != p2){
                parr[p2] = p1;
                size[p1] += size[p2];
                maxi = max(size[p1],maxi);
            }
            else{
                return false;
            }
        }
        return maxi == n ? true : false;
    }
};