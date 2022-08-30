class Solution {
public:
    const static int N = 1e3+1;
    long dp[N][N];
    int a = 1, b = 1, c = 1; // if i was given insertin deltion and insertion cost
int recc(string &s1, string &s2, int n, int m){

    if(n==0 or m==0){
        return dp[n][m] = (n==0 ? m *a  : n*b);
    }
    
    if(dp[n][m] != -1) return dp[n][m];
    
    int cnt;
    if(s1[n-1]==s2[m-1]){
        cnt = recc(s1, s2, n-1, m-1);
    }
    else{
        cnt = min(recc(s1,s2,n,m-1)+a,(min(recc(s1,s2,n-1,m)+b, recc(s1,s2,n-1,m-1)+c)));
        //        insert               delete                   replace
        // cnt+=1;
    }
    return dp[n][m] = cnt;
}


    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                dp[i][j] = -1;
            }
        }
        int ans = recc(word1,word2,n,m);
        return ans;
    }
};