class Solution {
public:
    int numTrees(int n) {
        vector<int>dp(n+1,1);
        
        for(int i=2;i<=n;i++){
            int l = 0, r = i-1;
            int sum = 0;
            while(l<r){
                sum += 2*(dp[l++]*dp[r--]);
            }
            if(l==r) sum += (dp[l]*dp[r]);
            
            dp[i] = sum;
        }
        return dp[n];
    }
};