class Solution {
private:
    vector<int>prev, curr;
    int recc(string s, int N, string t, int M){
        for(int n=0;n<=N; n++){
            for(int m=0; m<=M; m++){
                if(n==0 or m==0){
                    curr[m] = 0;
                    continue;
                }
                int len = 0;
                if(s[n-1] == t[m-1]){
                    len = prev[m-1]+ 1;
                }
                else len = max(prev[m], curr[m-1]);
                curr[m] = len;
            }
            prev = curr;
        }
        return curr[M];
    }

    int lcs(string s, string t){
        int n = s.size(), m = t.size();
        prev.resize(m+1, 0);
        curr.resize(m+1, 0);
        int ans = recc(s, n, t, m);
        return ans;
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        return lcs(text1, text2);
    }
};