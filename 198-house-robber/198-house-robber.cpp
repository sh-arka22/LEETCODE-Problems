class Solution {
private:
    vector<int>dp;
    int recc(vector<int>& nums, int Idx){
        for(int idx=0;idx<=Idx;idx++){
            if(idx == 0){
                dp[idx] = nums[idx];
                continue;
            }
            if(idx == 1){
                dp[idx] = max(nums[0], nums[1]);
                continue;
            }
            int pick = -(int)1e9, notpick = -(int)1e9;
            if(idx-2>=0){
                pick = nums[idx] + dp[idx-2];
            }
            notpick = dp[idx-1];

            dp[idx] = max(pick, notpick);
        }
        return dp[Idx];
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n);
        return recc(nums, n-1);
    }
};