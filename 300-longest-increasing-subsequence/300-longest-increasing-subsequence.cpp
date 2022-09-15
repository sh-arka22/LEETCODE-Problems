class Solution {
private:
    vector<vector<int>>dp;
    int solve(vector<int>& nums, int i, int prevIdx) {
    if(i < 0) return 0;                                // cant pick any more elements
    if(dp[i][prevIdx] != -1) return dp[i][prevIdx];
    int pick = (prevIdx == nums.size() or nums[i] < nums[prevIdx]) ? solve(nums, i - 1, i)+1 : 0;
    int dontPick = solve(nums, i-1, prevIdx);
    
    return dp[i][prevIdx] = max(pick, dontPick);
}
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n, vector<int>(n+1, -1));
        return solve(nums, n-1,n);
    }
};