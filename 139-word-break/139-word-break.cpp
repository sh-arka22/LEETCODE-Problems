class Solution {
public:
    unordered_set<string>st;
    int *dp;
    int recc(string s, int n, int start){
        if(start==n) return dp[start] = 1;
        if(dp[start] != -1) return dp[start];
        int cnt = 0;
        for(int end = start;end<n;end++){
            string curr = s.substr(start,end-start+1);
            if(st.count(curr)){
                cnt += recc(s, n, end+1);
            }
        }
        return dp[start] = cnt;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        for(string word:wordDict){
            st.insert(word);
        }
        int n = s.size();
        dp = new int[n+1];
        fill(dp,dp+n+1,-1);
        return recc(s,n,0);        
    }
};