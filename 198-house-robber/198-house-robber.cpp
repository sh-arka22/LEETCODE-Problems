class Solution {
private:
    vector<int>dp;
    int recc(vector<int>&nums, int n){
        if(n==0 or n==1) return dp[n] = (n == 1 ? max(nums[0], nums[1]) : nums[0]);
        if(dp[n] != -1) return dp[n];
        int pick = 0, notpick = 0;
        if(n-2>=0){
            pick = nums[n] + recc(nums, n-2);
        }
        notpick = recc(nums, n-1);
        
        return dp[n] = max(pick, notpick);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n,-1);
        if(n == 2) return max(nums[0], nums[1]);
        return recc(nums, n-1);
    }
};