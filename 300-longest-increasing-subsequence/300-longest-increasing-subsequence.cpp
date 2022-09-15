class Solution {
private:
    vector<int>dp;
    int recc(vector<int>& nums, int idx){
        if(idx-1 < 0) return dp[idx] = 0;
        if(dp[idx] != -1) return dp[idx];
        int cnt = 1;
        for(int i=idx;i>=1;i--){
            if(nums[idx-1]>nums[i-1]){
                int faith = recc(nums, i) ;
                cnt = max(cnt, faith+1);
            }
        }
        return dp[idx] = cnt;
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int maxLen = -1;
        dp.resize(n+1, -1);
        for(int i=1;i<n+1;i++){
            maxLen = max(maxLen,recc(nums, i));
        }
        return maxLen;
    }
};