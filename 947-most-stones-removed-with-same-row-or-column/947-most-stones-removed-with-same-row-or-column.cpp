class Solution {
public:
    const static int N = 1e3+1;
    int parr[N];
    int findParr(int u){
        return parr[u] == u ? u : (parr[u] = findParr(parr[u]));
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        
        for(int i=0;i<N;i++){
            parr[i] = i;
        }
        int island = n;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(stones[i][0] == stones[j][0] or stones[i][1] == stones[j][1]){
                    int p1 = findParr(i);
                    int p2 = findParr(j);
                    if(p1 != p2){
                        parr[p2] = p1;
                        island--;
                    }
                }
            }
        }
        
        return n-island;
    }
};