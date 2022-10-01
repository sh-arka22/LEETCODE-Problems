class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int dp[n];
        fill(dp, dp+n, 1);
        int maxi = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] and dp[j]+1 > dp[i]){
                    dp[i] = dp[j]+1;
                }
            }
            maxi = max(dp[i], maxi);
        }
        return maxi;
    }
};