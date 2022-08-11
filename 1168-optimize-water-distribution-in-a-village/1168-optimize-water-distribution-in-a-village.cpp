class Solution {
public:
    const static int N = 1e4+1;
    int parr[N];
    
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    
    int minCostToSupplyWater(int n, vector<int>& wells, vector<vector<int>>& pipes) {
        
        for(int i=0;i<n;i++){
            pipes.push_back({0,i+1,wells[i]});
        }
        
        sort(pipes.begin(), pipes.end(), [](vector<int>&a, vector<int>&b){
            return a[2] < b[2];
        });
        
        for(int i=0;i<=n;i++){
            parr[i] = i;
        }
        int cost = 0;
        for(vector<int>edge: pipes){
            int v = edge[0], u = edge[1], w = edge[2];
            int p1 = findParr(v);
            int p2 = findParr(u);
            
            if(p1 != p2){
                parr[p1] = p2;
                cost += w;
            }
        }
        return cost;
    }
};