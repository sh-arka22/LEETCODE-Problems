class Solution {
public:
    vector<vector<int>>dp;
string removeStar(string &p){
    int n = p.size();
    if(n==0) return "";
    string res ;
    res+=string(1,p[0]);
    for(int i=1;i<n;i++){
        if(p[i] == '*' and res.back() == '*'){

        }
        else{
            res += string(1,p[i]);
        }
    }
    return res;
}

bool recc(string &s, string &t, int n, int m){
    if(n-1<0 or m-1<0){
        if(n-1<0 and m-1<0) return dp[n][m] = true;
        if(m-1==0 and t[m-1] == '*') return dp[n][m ] = true;
        return dp[n][m] = false;
    }
    if(dp[n][m] != -1) return dp[n][m];
    bool flag = false;
    
    if(t[m-1] == '*'){
        flag = recc(s, t, n, m-1) or recc(s, t, n-1, m) or recc(s, t, n-1, m-1);
    }
    else if(t[m-1] == '?'){
        flag = recc(s, t, n-1, m-1);
    }
    else{
        if(s[n-1] == t[m-1]) flag = recc(s, t, n-1, m-1);
        else flag = false;
    }
    return dp[n][m] = flag;
}

bool isMatch(string s, string p) {
    p = removeStar(p);
    int n = s.size(), m = p.size();
    dp.resize(n+1, vector<int>(m+1,-1));
    return recc(s, p, n, m);
}
};