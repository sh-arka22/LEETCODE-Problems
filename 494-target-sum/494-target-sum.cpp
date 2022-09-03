class Solution {
public:
    vector<vector<int>>dp;
// map<pair<int,int>,int>dp;
int recc(vector<int> &nums, int n, int tar, int sum){
    if(n==0) return dp[n][tar] = (tar==sum);
    if(dp[n][tar] != -1) return dp[n][tar];
    int cnt = 0;

    if(tar - (nums[n-1]) >= 0) cnt += recc(nums,n-1, tar - (nums[n-1]), sum);
    if(tar - (-nums[n-1]) <= 2*sum) cnt += recc(nums,n-1, tar - (-nums[n-1]), sum);

    return dp[n][tar] = cnt;
}

int findTargetSumWays(vector<int>& nums, int target) {
    int sum = accumulate(begin(nums), end(nums), 0);
    if(sum < target or sum < -target) return 0;
    dp.resize(nums.size()+1, vector<int>(2*sum+1, -1));
    return recc(nums,nums.size(), sum + target, sum);
}
};