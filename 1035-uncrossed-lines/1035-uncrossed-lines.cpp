class Solution {
public:
    const static int N = 2e3+1;
    long dp[N][N];
    int recc(vector<int>& nums1, vector<int>& nums2, int n, int m){
    if(n==0 or m==0) return dp[n][m] = 0;
    int cnt;
    if(dp[n][m] != -1) return dp[n][m];
    if(nums1[n-1] == nums2[m-1]){
        cnt = (recc(nums1,nums2,n-1,m-1) + 1);
    }
    else{
        cnt = max(recc(nums1,nums2,n-1,m), recc(nums1,nums2,n,m-1));
    }
    return dp[n][m] = cnt;
}

int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            dp[i][j] = -1;
        }
    }
    return recc(nums1,nums2,n,m);
}
};