class Solution {
public:
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

int longestPalindromeSubseq(string s) {
    vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1,-1));
        return recc(s,0,s.size()-1,dp);
    }
};