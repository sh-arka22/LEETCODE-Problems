class Solution {
public:
uint *dp;
int permutationTable(vector<int>nums, int Tar){
	dp[0] = 1;
	for(int tar = 1; tar<=Tar; tar++){
		uint cnt = 0;
		for(auto ele:nums){
			if(tar - ele >= 0){
				cnt += dp[tar-ele];
			}
		}
		dp[tar] = cnt;
	}
	return dp[Tar];
}

int combinationSum4(vector<int>& nums, int target) {
    dp = new uint[target+1];
    fill(dp, dp+target+1,0);
    return permutationTable(nums, target);        
}
};