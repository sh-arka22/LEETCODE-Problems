class Solution {
public:
    const static int N = 1e4;
    int parr[N];
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    int dis(vector<int>&a, vector<int>&b){
        return abs(a[0]-b[0]) + abs(b[1]-a[1]);
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        vector<vector<int>>edges;
        int v = points.size();
        for(int i=0;i<v;i++){
            for(int j=i+1;j<v;j++){
                int w = dis(points[i],points[j]);
                edges.push_back({w ,i ,j});
            }
        }
        sort(edges.begin(), edges.end());
        
        for(int i=0;i<v ;i++) parr[i] = i;
        
        int cost = 0;
        int noOfEdges = 0;
        for(vector<int>edge: edges){
            int w = edge[0], V = edge[1], u = edge[2];
            
            int p1 = findParr(V);
            int p2 = findParr(u);
            
            if(p1 != p2){
                parr[p1] = p2;
                cost += w;
                noOfEdges++;
            }
            // if(noOfEdges >= v) break;
        }
        return cost;
    }
};