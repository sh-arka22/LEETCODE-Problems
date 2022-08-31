class Solution {
public:
    int *dp;
    bool isPalindrome(int i, int j, string &s){
        while(i<j){
            if(s[i] != s[j]) return false;
            i++;j--;
        }
        return true;
    }

    int recc(int i,int n,string &s){
        if(i==n) return dp[i] = 0;
        if(dp[i] != -1) return dp[i];
        int mini = INT_MAX;

        for(int j=i;j<n;j++){
            if(isPalindrome(i, j, s)){
                int cnt = 1+recc(j+1, n, s);
                mini = min(mini,cnt);
            }
        }
        return dp[i] = mini;
    }

    int minCut(string s) {
        int n = s.size();
        dp = new int[n+1];
        fill(dp,dp+n+1,-1);
        return recc(0, n, s)-1;
    }
};