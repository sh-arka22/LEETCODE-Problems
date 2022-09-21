class Solution {
public:
	unordered_map<int,int>mp;
	int f(int i,vector<int>& nums,int n,vector<int>& dp){
		if(i==n) return 0;
		if(dp[i]!=-1) return dp[i];
		int del=mp[nums[i]]*nums[i]+f(upper_bound(nums.begin(),nums.end(),nums[i]+1)-nums.begin(),nums,n,dp);
		int notdel=f(i+1,nums,n,dp);
		return dp[i]=max(del,notdel);
	}

	int deleteAndEarn(vector<int>& nums) {
		int n=nums.size();
		sort(nums.begin(),nums.end());
		for(auto i:nums) mp[i]++;
		vector<int> dp(n,-1);
		return f(0,nums,n,dp);
	}
};