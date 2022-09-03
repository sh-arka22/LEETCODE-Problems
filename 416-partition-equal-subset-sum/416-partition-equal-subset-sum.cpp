class Solution {
public:
vector<vector<uint>>dp;
int SingleCombinations(vector<int>nums, int Tar, int N){
    for(int n = 0; n<=N; n++){
        for(int tar = 0; tar<=Tar; tar++){
            if(n==0 or tar==0){
                dp[n][tar] = (tar == 0);
                continue;
            }
            if(tar - nums[n-1] >= 0)
                dp[n][tar] += dp[n-1][tar-nums[n-1]];
            dp[n][tar] += dp[n-1][tar];
        }
    }
    return dp[N][Tar];
}
bool canPartition(vector<int> nums) {
    int n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if(sum & 1) return false;
    
    int tar = sum/2;
    dp.resize(n+1,vector<uint>(tar+1,0));
    return SingleCombinations(nums, tar, n);
}
};