class Solution {
public:
    int longestIdealString(string s, int k) {
        int dp[150] = {0};
        int maxLen = -1;
        for(int c:s){
            dp[c] += 1;
            for(int j = c-k; j<=c+k;j++){
                if(c != j){
                    dp[c] = max(dp[c], dp[j]+1);
                }
            }
            maxLen = max(maxLen, dp[c]);
        }
        return maxLen;
    }
};