class Solution {
public:
int tabu(string s, int ST, int EN,vector<vector<int>>&dp){
    for(int gap=0; gap<s.size();gap++){
        for(int st=0, en = gap; en<s.size();st++,en++){
            if(st>=en) {
                dp[st][en] = st == en ? 1 : 0;
                continue;
            }
            if(s[st] != s[en]){
                dp[st][en] = max(dp[st+1][en],dp[st][en-1]);
            }
            else dp[st][en] = (dp[st+1][en-1]+2);    
        }
    }
    return dp[ST][EN];
}

int longestPalindromeSubseq(string s) {
    vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1,0));
    return tabu(s,0,s.size()-1,dp);
}
};