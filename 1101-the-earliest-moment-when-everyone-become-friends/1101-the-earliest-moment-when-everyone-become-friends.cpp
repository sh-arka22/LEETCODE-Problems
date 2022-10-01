class Solution {
public:
    const static int N = 1e4+1; 
    int parr[N];
    int size[N];
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    int earliestAcq(vector<vector<int>>& logs, int n) {
        for(int i=0;i<N;i++){
            parr[i] = i;
            size[i] = 1;
        }
        sort(begin(logs), end(logs));
        
        int group = n;
        for(vector<int>log:logs){
            int p1 = findParr(log[1]), p2 = findParr(log[2]);
            if(p1 != p2){
                parr[p1] = p2;
                size[p2] += size[p1];
                group--;
            }
            if(group == 1) return log[0];
        }
        return -1;
    }
};