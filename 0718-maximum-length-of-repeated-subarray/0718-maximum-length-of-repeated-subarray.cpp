class Solution {
private:
    vector<vector<int>>dp;
    int recc(vector<int>&s , int N, vector<int> &t, int M, int &maxi){
        for(int n=0;n<=N; n++){
            for(int m=0; m<=M; m++){
                if(n==0 or m==0){
                    dp[n][m] = 0;
                    continue;
                }
                int len = 0;
                if(s[n-1] == t[m-1]){
                    len = dp[n-1][m-1]+ 1;
                }
                else len = 0;
                dp[n][m] = len;
                maxi = max(maxi, len);
            }
        }
        return dp[N][M];
    }
    public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        //longest common substring
        dp.resize(size(nums1)+1, vector<int>(size(nums2)+1, 0));
        int maxi = 0;
        recc(nums1,  size(nums1), nums2, size(nums2), maxi);
        return maxi;
    }
};