class Solution {
private:
    vector<int>dp;
    int recc(vector<int> &nums, int SI, int ei){
        for(int si=ei;si>=0;si--){
            if(si == ei){
                dp[si] = 0;
                continue;
            }
            int mini = (int)1e9;
            for(int i =1;i<=nums[si];i++){
                if(si+i>ei) continue;
                mini = min(mini, dp[si+i]);
            }
            dp[si] = mini+1;
        }
        return dp[0];
    }
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n);
        return recc(nums, 0, n-1);
    }
};