class Solution {
public:
    int *dp;
    int tabu(vector<int>& nums){
        int n = nums.size(), maxLen = 0;
        dp = new int[n];
        for(int i=0;i<n;i++){
            dp[i] = 1;
            for(int j=i-1;j>=0;j--){
                if(nums[i] > nums[j]){
                    dp[i] = max(dp[i], dp[j] + 1); 
                }
            }
            maxLen = max(maxLen,dp[i]);
        }
        return maxLen;
    }
    int lengthOfLIS(vector<int>& nums) {
        return tabu(nums);
    }
};