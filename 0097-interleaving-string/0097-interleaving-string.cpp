class Solution {
private:
    vector<vector<int>>dp;
    bool recc(string &s1, int n, string &s2, int m, string &s3, int k){
        if(n<0) return s2.substr(0, m+1) == s3.substr(0, k+1);
        if(m<0) return s1.substr(0, n+1) == s3.substr(0, k+1);
        if(dp[n][m] != -1) return dp[n][m];
        bool flag = false;
        if((s1[n]==s3[k] and recc(s1, n-1, s2, m, s3, k-1)) or (s2[m]==s3[k] and recc(s1, n, s2, m-1, s3, k-1)))
            flag = true;
        return dp[n][m]=flag;
    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(size(s1)+size(s2) != size(s3)) return 0;
        dp.resize(size(s1), vector<int>(size(s2), -1));
        return recc(s1, s1.size()-1, s2, s2.size()-1, s3, size(s3)-1);
    }
};