class Solution {
public:
    vector<int>parr;
    int findParr(int v){
        return v == parr[v] ? v : (parr[v] = findParr(parr[v]));
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        for(int i=0;i<n;i++) parr.push_back(i);
        
        int wiresExtra = 0; 
        int computers = n;
        for(auto &wire:connections){
            int v = wire[0];
            int u = wire[1];
            
            int p1 = findParr(v);
            int p2 = findParr(u);
            if(p1 != p2){
                parr[p1] = p2;
                computers--;
            }
            else wiresExtra++;
        }
        computers--;
        return wiresExtra<computers ? -1 : computers;
    }
};