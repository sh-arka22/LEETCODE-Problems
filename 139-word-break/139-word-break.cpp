class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set <string> st;
        int maxi = 0;
        int n = s.size();
        for(string it:wordDict){
            st.insert(it);
            maxi = max(maxi, (int)it.size());
        }
        cout<<maxi;
        vector<int>dp(n+1,0);
        dp[0] = 1;
        for(int i=0;i<=n;i++){
            if(dp[i]==0) continue;
            for(int len = 1; len<=maxi and i+len<=n;len++){
                if(st.count(s.substr(i,len))){
                    dp[i+len] = 1;
                }
            }
        }
        return dp[n];
    }
};