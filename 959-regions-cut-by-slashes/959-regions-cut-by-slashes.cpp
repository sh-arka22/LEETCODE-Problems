class Solution {
public:
    int *parr;
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    int union_slashes(int p1, int p2){
        if(p1 != p2){
            parr[p1] = min(p1,p2);
            parr[p2] = min(p1,p2);
            return 0;
        }
        return 1;
    }
    
    int regionsBySlashes(vector<string>& grid) {
        int n = grid.size();
        int N = n+1;
        parr = new int[N*N];
        for(int i=0;i<N*N;i++){
            if(i/N == 0 or i%N==0 or i/N==N-1 or i%N==N-1)
                parr[i] = 0;
            else parr[i] = i;
        }
        
        int cycle = 1;
        for(int r=0;r<n;r++){
            string s = grid[r];
            for(int c = 0;c<s.size();c++){
                if(s[c] == '/'){
                    int p1 = findParr(r*N+c+1);
                    int p2 = findParr((r+1)*N+c);
                    cycle += union_slashes(p1, p2);
                }
                else if(s[c] == '\\'){
                    int p1 = findParr(r*N+c);
                    int p2 = findParr((r+1)*N+c+1);
                    cycle += union_slashes(p1, p2);
                }
            }
        }
        return cycle;
    }
};