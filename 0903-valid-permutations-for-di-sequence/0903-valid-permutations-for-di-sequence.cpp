class Solution {
private:
    int vis[201];
    const static int mod = 1e9+7;
    using ll = long long;
    // int dp[202][202] = {};
    vector<vector<int>>dp;
    ll recc(string &s, int idx, int prev){
        if(idx==s.size()) return 1;
        if(dp[idx][prev] != -1) return dp[idx][prev]; //zero is a part of ans 
        ll cnt = 0;
        if(s[idx] == 'I'){
            for(int i = prev+1;i<=size(s);i++){
                if(vis[i]) continue;
                vis[i] = 1;
                cnt += recc(s, idx+1, i);
                vis[i] = 0;
            }
        }
        else{
            for(int i = 0; i<prev; i++){
                if(vis[i]) continue;
                vis[i] = 1;
                cnt += recc(s, idx+1, i);
                vis[i] = 0;
            }
        }
        return dp[idx][prev] = cnt%mod;
    }
public:
    int numPermsDISequence(string s) {
        dp.resize(202, vector<int>(202, -1));
        ll cnt = 0;
        for(int i=0;i<=s.size();i++){
            if(vis[i]) continue;
            vis[i] = 1;
            cnt += recc(s, 0, i);
            vis[i] = 0;
        }
        return cnt%mod;
    }
};