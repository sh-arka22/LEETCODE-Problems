class Solution {
public:
    const static int N = 1e4+1;
    int parr[N];
    const int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    vector<int> numIslands2(int n, int m, vector<vector<int>>& positions) {
        
        vector<int>ans;
        int cnt = 0;
        
        for(int i=0;i<m*n;i++){
            parr[i] = i;
        }
        vector<vector<int>>island(n,vector<int>(m,0));
        
        for(vector<int> pos:positions){
            int R = pos[0], C = pos[1];
            
            if(island[R][C] == 1){
                ans.push_back(cnt);
                continue;
            }
            
            island[R][C] = 1;
            int p1 = findParr(R*m+C);
            cnt++;
            for(auto &[dr,dc]:dir){
                int r = R+dr, c = C+dc;
                if(r<0 or r>=n or c<0 or c>=m or island[r][c] == 0) continue;
                
                int p2 = findParr(r*m+c);
                if(p1 != p2){
                    cnt--;
                    parr[p2] = p1;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};