class Solution {
private:
    vector<int>dp;
    int recc(vector<int>& nums, int Idx){
        for(int idx=0;idx<=Idx;idx++){
            if(idx-1 < 0){
                dp[idx] = 0;
                continue;
            }
            int cnt = 1;
            for(int i=idx-1;i>=1;i--){
                if(nums[idx-1]>nums[i-1]){
                    int faith = dp[i];
                    cnt = max(cnt, faith+1);
                }
            }
            dp[idx] = cnt;
        }
        return 1;
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int maxLen = -1;
        dp.resize(n+1, -1);
        int call = recc(nums, n);
        for(int i=1;i<n+1;i++){
            maxLen = max(maxLen,dp[i]);
        }
        return maxLen;
    }
};