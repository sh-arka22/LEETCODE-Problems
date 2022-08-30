class Solution {
public:
    const static int N = 2e3+1;
int dp[N][N];
string removeStars(string &str) {
    if (str.length() == 0)
        return str;

    string sb = "";
    sb+=str[0];

    int i = 1;
    while (i < str.length()) {
        while (i < str.length() && sb[sb.length() - 1] == '*' && str[i] == '*')
            i++;
        if (i < str.length())
            sb+=str[i];
        i++;
    }

    return sb;
}


bool recc(string &s, string &t, int n, int m){
    if(n==0 or m==0){
        if(n==0 and m==0) return dp[n][m] = 1;
        else if(m==1 and t[m-1] == '*') return dp[n][m] = 1;
        else return dp[n][m] = 0;
    }

    if(dp[n][m] != -1) return dp[n][m];
    bool flag = false;

    if(t[m-1] == '*'){
        flag = flag or recc(s, t, n-1, m)  or recc(s, t, n, m-1);
    }
    else if(t[m-1] == '?'){
        flag = recc(s, t, n-1, m-1);
    }
    else{
        if(s[n-1] == t[m-1]){
            flag = recc(s, t, n-1, m-1);
        }
        else{
            flag = false;
        }
    }
    return dp[n][m] = flag;
}

bool isMatch(string s, string p) {
    p = removeStars(p);
    int n = s.size();
    int m = p.size();
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            dp[i][j] = -1;
        }
    }
    return recc(s, p, s.size(), p.size());
}
};