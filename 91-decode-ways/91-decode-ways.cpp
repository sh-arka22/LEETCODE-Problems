class Solution {
public:
    int *dp;
    const int tabulation(string s, int IDX){
    for(int idx=0; idx<=IDX; idx++){
        if(s[idx] == '0'){
            dp[idx] = 0;
            continue;
        }
        if(idx == 0){
            dp[idx] = 1;
            continue;
        }
        
        // if(dp[idx] != -1) return dp[idx];
        char ch1 = s[idx-1];
        int cnt = dp[idx-1];
        
        if(idx>=2){
            char ch2 = s[idx-2];
            int num = (ch2-'0')*10 + (ch1-'0');
            if(num<=26 and num>0)
                cnt+=dp[idx-2];
        }
        dp[idx] = cnt;
    }
    return dp[IDX];
}
    int numDecodings(string s) {
        int n = s.size();
        dp = new int[n+1];
        fill(dp,dp+n+1, -1);
        int ans = tabulation(s,n);
        delete[] dp;
        return ans;
    }
};