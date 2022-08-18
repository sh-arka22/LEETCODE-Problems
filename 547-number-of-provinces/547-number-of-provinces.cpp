class Solution {
public:
    vector<int>parr;
    int findParr(int v){
        return v == parr[v] ? v : (parr[v] = findParr(parr[v]));
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        
        for(int i=0;i<n;i++) parr.push_back(i);
        int cnt = n;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isConnected[i][j] == 0)continue;
                
                int p1 = findParr(i);
                int p2 = findParr(j);
                
                if(p1 != p2){
                    parr[p1] = p2;
                    cnt--;
                }
            }
        }
        return cnt;
    }
};