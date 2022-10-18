class Solution {
private:
    int recc(string &s, int st, int en, vector<vector<int>>&dp){
        if(st>=en) return dp[st][en] = (st == en ? 1 : 0);
        if(dp[st][en] != -1) return dp[st][en];
        int cnt;
        if(s[st] != s[en]){
            cnt = max(recc(s,st+1,en,dp),recc(s,st,en-1,dp));
        }
        else cnt = (recc(s,st+1,en-1,dp)+2);

        return dp[st][en] = cnt;
    }
    int tab(string &s, int St, int En, vector<vector<int>>&dp){
        for(int gap=0;gap<=En;gap++){
            for(int st=0, en=gap; en<=En;en++,st++){
                if(st>=en) {
                    dp[st][en] = (st == en ? 1 : 0);
                    continue;
                }
                int cnt;
                if(s[st] != s[en]){
                    cnt = max(dp[st+1][en],dp[st][en-1]);
                }
                else cnt = dp[st+1][en-1]+2;
                dp[st][en] = cnt;
            }
        }
        return dp[St][En];
    }

    int LPSubsequence(string &s) {
        vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1,0));
        return tab(s,0,s.size()-1,dp);
    }
public:
    int minInsertions(string s) {
        int n = s.size();
        return n - LPSubsequence(s);
    }
};