class Solution {
private:
    int LCS(vector<int>nums, int n){
        vector<int>dp(n,1), cnt(n,1);
        int maxLen = -1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] and dp[i] < dp[j]+1){
                    dp[i] = dp[j]+1;
                    cnt[i] = cnt[j];
                }
                else if(nums[i]>nums[j] and dp[i] == dp[j]+1){
                    cnt[i] += cnt[j];
                }
            }
            maxLen = max(maxLen, dp[i]);
        }
        
        int nos = 0;
        for(int i=0;i<n;i++){
            if(dp[i]==maxLen) nos+=cnt[i];
        }
        return nos;
    }
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        return LCS(nums, n);
    }
};