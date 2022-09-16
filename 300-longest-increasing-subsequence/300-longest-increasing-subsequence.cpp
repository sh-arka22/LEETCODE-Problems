class Solution {
private:
    int LIS(vector<int>& nums){
        int n = nums.size();
        int maxLen = -1;
        vector<int>dp(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] and dp[i]< dp[j]+1){
                    dp[i] = dp[j]+1;
                }
            }
            maxLen = max(maxLen, dp[i]);
        }
        return maxLen;
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        return LIS(nums);
    }
};