class Solution {
private:
    vector<vector<int>>dp;
    int recc(int e, int f){
        if(f==0 or f==1 or e==1) return f;
        if(dp[e][f] != -1) return dp[e][f];
        int mini = 1e9;
        int l = 1, r = f;
        while(l<=r){
            int k = (l+r)/2;
            int up = recc(e, f-k);
            int down = recc(e-1, k-1);
            int operation = 1 + max(up, down);
            mini = min(mini, operation);
            if(up<down){
                r = k-1;
            }
            else l = k+1;
        }
        return dp[e][f] = mini;
    }
public:
    int superEggDrop(int e, int f) {
        dp.resize(e+1 ,vector<int>(f+1, -1));
        return recc(e, f);
    }
};