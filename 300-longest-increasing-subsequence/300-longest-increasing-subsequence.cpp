class Solution {
public:
    int *dp;

int recc(vector<int>&nums, int ei){
    if(ei == 0) return dp[ei] = 1;
    if(dp[ei] != 0) return dp[ei];
    int maxLen = 1;
    for(int i = ei-1;i>=0;i--){
        if(nums[i] >= nums[ei]) continue;
        int faith = recc(nums, i);
        maxLen = max(maxLen, faith+1);
    }
    return dp[ei] = maxLen;
}

int lengthOfLIS(vector<int>&nums) {
    dp = new int[nums.size()];
    fill(dp,dp+nums.size(),0);
    int maxLen = 0;
    for(int i=0;i<nums.size();i++){
        maxLen = max(maxLen, recc(nums, i));
    }
    return maxLen;
}
};