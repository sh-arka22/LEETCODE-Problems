class Solution {
private:
    vector<vector<int>>dp;
    int recc(string &s1, string &s2, int n, int m){
        if(n==0 or m==0){
            if(n>0) return dp[n][m] = n;
            if(m>0) return dp[n][m] = m;
            return dp[n][m] = 0;
        }

        if(dp[n][m] != -1) return dp[n][m];
        int deletion = (int)1e9, insertion = (int)1e9, replace = (int)1e9;

        if(s1[n-1] == s2[m-1]){
            replace = recc(s1, s2, n-1, m-1);
        }
        else{
            deletion = recc(s1, s2, n-1, m)+1;
            insertion = recc(s1, s2, n, m-1)+1;
            replace = recc(s1, s2, n-1, m-1)+1;
        }

        return dp[n][m] = min(insertion, min(deletion,replace));
    }
public:
    bool isOneEditDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        dp.resize(n+1, vector<int>(m+1,-1));
        return recc(word1, word2, n, m) == 1 ? 1 : 0;
    }
};