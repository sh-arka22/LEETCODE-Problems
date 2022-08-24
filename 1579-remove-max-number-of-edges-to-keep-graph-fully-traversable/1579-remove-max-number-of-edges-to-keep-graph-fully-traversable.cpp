class Solution {
public:
    const static int N = 1e5+2;
    int aliceParr[N];
    int bobParr[N];
    int findParr(int v, int parr[]){
        return v == parr[v] ? v : (parr[v] = findParr(parr[v],parr));
    }
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        sort(edges.begin(), edges.end(), greater<vector<int>>());
        for(int i=1;i<=n;i++){
            aliceParr[i] = i;
            bobParr[i] = i;
        }
        
        int aliceConnection = n, bobConnection = n;
        
        int removed = 0;
        for(vector<int>edge:edges){
            int type = edge[0], v = edge[1], u = edge[2];
            
            if(type == 3){
                int pa1 = findParr(v,aliceParr);
                int pa2 = findParr(u,aliceParr);
                int pb1 = findParr(v,bobParr);
                int pb2 = findParr(u,bobParr);
                if(pa1 != pa2){
                    aliceConnection--;
                    aliceParr[pa2] = pa1;
                    bobConnection--;
                    bobParr[pb2] = pb1;
                }
                // if(pb1 != pb2){
                //     bobConnection--;
                //     bobParr[pb2] = pb1;
                // }
                if(pa1 == pa2 or pb1 == pb2){
                    removed++;
                }
            }
            else if(type == 1){
                int pa1 = findParr(v,aliceParr);
                int pa2 = findParr(u,aliceParr);
                if(pa1 != pa2){
                    aliceConnection--;
                    aliceParr[pa2] = pa1;
                }
                else{
                    removed++;
                }
            }
            else{
                int pb1 = findParr(v,bobParr);
                int pb2 = findParr(u,bobParr);
                if(pb1 != pb2){
                    bobConnection--;
                    bobParr[pb2] = pb1;
                }
                else removed++;
            }
        }
        if(aliceConnection != 1 or bobConnection != 1) return -1;
        
        return removed;
    }
};