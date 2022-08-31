class Solution {
public:
    const static int N = 2e3+1;
    int dp[N][N];
    int recc(vector<int>& nums1, vector<int>& nums2, int n, int m){
        if(n==0 or m==0) return dp[n][m] = -(int)1e8;
        if(dp[n][m] != -(int)1e9) return dp[n][m];
        int val = nums1[n-1] * nums2[m-1];
        int acceptedBothNumbers = recc(nums1,nums2,n-1,m-1)+val;
        int a = recc(nums1, nums2, n-1,m);
        int b = recc(nums1, nums2, n,m-1);
        vector<int>maximum{val,acceptedBothNumbers,a,b};
        int maxi = *max_element(maximum.begin(),maximum.end());

        return dp[n][m] = maxi;
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                dp[i][j] = -(int)1e9;
            }
        }
        return recc(nums1,nums2,n,m);        
    }
};