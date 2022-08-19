class Solution {
public:
    int *dp;
    int recc(string s, int idx){
        if(s[idx] == '0') return dp[idx] = 0;
        if(idx == 0) return dp[idx] = 1;
        
        if(dp[idx] != -1) return dp[idx];
        char ch1 = s[idx-1];
        int cnt = recc(s, idx-1);
        
        if(idx>=2){
            char ch2 = s[idx-2];
            int num = (ch2-'0')*10 + (ch1-'0');
            if(num<=26 and num>0)
                cnt+=recc(s,idx-2);
        }
        return dp[idx] = cnt;
    }
    int numDecodings(string s) {
        int n = s.size();
        dp = new int[n+1];
        fill(dp,dp+n+1, -1);
        return recc(s,n);
    }
};