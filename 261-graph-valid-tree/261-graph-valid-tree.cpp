class Solution {
    vector<int>size;
    vector<int>parr;
    int maxi = 0;
    int findParr(int v){
        return v == parr[v] ? v : (parr[v] = findParr(parr[v]));
    }
    void union_(int p1, int p2){
        if(size[p1]<size[p2]){
            for(auto it: parr) cout<<it<<" ";
            parr[p2] = p1;
            size[p1] += size[p2];
            maxi = max(maxi,size[p1]);
        }
        else{
            parr[p1] = p2;
            size[p2] += size[p1];
            maxi = max(maxi,size[p2]);
        }
    }
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size() == 0 and n == 1) return 1;
        for(int i=0;i<n;i++){
            size.push_back(1);
            parr.push_back(i);
        }
        
        for(auto &edge:edges){
            int v = edge[0], u = edge[1];
            int p1 = findParr(v);
            int p2 = findParr(u);
            if(p1 != p2)
                union_(p1,p2);
            else return false;
        }
        
        return maxi == n ? 1 : 0;
    }
};