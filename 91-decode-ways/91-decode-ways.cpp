class Solution {
private:
    vector<int>dp;
    int recc(string &s, int I, int n){
        for(int i = n; i>=0; i--){
            if(s[i] == '0'){
                dp[i] = 0;
                continue;
            }
            if(i == n){
                dp[i] = 1;
                continue;
            }
            int cnt = 0;
            char c1 = s[i];
            cnt += dp[i+1];

            if(i+1<n){
                char c2 = s[i+1];
                int num = (c1-'0')*10+(c2-'0');
                if(num<=26) cnt += dp[i+2];
            }
            dp[i] = cnt;
        }
        return dp[0];
    }
public:
    int numDecodings(string s) {
        int n = s.size();
        dp.resize(n+1,0);
        return recc(s, 0, n);
    }
};