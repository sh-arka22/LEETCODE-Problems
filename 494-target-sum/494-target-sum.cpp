class Solution {
public:
    vector<vector<int>>dp;
// map<pair<int,int>,int>dp;
int recc(vector<int> &nums, int n, int tar, int sum){
    if(n==0) return dp[n][sum] = (tar==sum);
    if(dp[n][sum] != -1) return dp[n][sum];
    int cnt = 0;

    cnt += recc(nums,n-1, tar , sum + (nums[n-1]));
    cnt += recc(nums,n-1, tar , sum - (nums[n-1]));

    return dp[n][sum] = cnt;
}

int findTargetSumWays(vector<int>& nums, int target) {
    int sum = accumulate(begin(nums), end(nums), 0);
    if(sum < target or sum < -target) return 0;
    dp.resize(nums.size()+1, vector<int>(2*sum+1, -1));
    return recc(nums,nums.size(), sum + target, sum);
}
};