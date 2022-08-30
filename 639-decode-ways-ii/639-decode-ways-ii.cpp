class Solution {
public:
    //gold mine   min cost 
    const static int mod = 1e9+7;int n;
    const static int N = 1e5;
    long dp[N+2];
    long recc(string &s, int idx){
        if(s[idx]=='0') return dp[idx] = 0;
        if(idx == s.size()) return 1;
        
        if(dp[idx]!=-1) return dp[idx];
        
        char ch1 = s[idx];

        long cnt = 0;

        if(ch1 == '*'){
            cnt = ((cnt + 9*recc(s,idx+1)))%mod; //comes as single char
            if(idx < n-1){
                char ch2 = s[idx+1];
                if(ch2>='0' and ch2<='6'){
                    cnt = (cnt + (2*recc(s,idx+2)))%mod;
                }
                else if(ch2 >= '7' and ch2<='9'){
                    cnt = (cnt + (1*recc(s,idx+2)))%mod;
                }
                else{
                    cnt = (cnt + (15 * recc(s,idx+2)))%mod;
                }
            }
            else{
                //nothing
            }
        }
        else{
            /**
             * starting character is not a star
             */
            cnt = (cnt + 1 * (recc(s,idx+1)))%mod;
            if(idx < n-1){
                char ch2 = s[idx+1];
                if(ch2 == '*'){
                    if(ch1 == '1') cnt = (cnt + (9 * recc(s,idx+2)))%mod;
                    else if(ch1 == '2') cnt = (cnt+ 6 * recc(s,idx+2))%mod;
                }
                else if(ch2 != '*'){
                    int num = (ch1-'0')*10 + (ch2-'0');
                    if(num<=26 and num>0){
                        cnt= (cnt+ (1*recc(s,idx+2)))%mod;
                    }
                }
            }
        }
        return dp[idx] = cnt;
    }
    int numDecodings(string s) {
        n = s.size();
        // dp = new long[n+1];
        fill(dp,dp+n+1,-1);
        int ans = recc(s,0);
        return ans;
    }
};