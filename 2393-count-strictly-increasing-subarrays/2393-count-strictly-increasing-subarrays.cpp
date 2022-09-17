class Solution {
public:
    long long countSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<long long>dp(n, 1);
        
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                dp[i] += dp[i-1];
            }
        }
        long long sum = accumulate(dp.begin(), dp.end(), 0ll);
        return sum;
    }
};