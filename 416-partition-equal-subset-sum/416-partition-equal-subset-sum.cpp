class Solution {
public:
    vector<vector<int>>dp;
    bool recc(int n, int tar, vector<int>arr){
        if(n==0 or tar ==arr[n]) return dp[tar][n] = (tar==arr[n]);
        if(dp[tar][n] != -1) return dp[tar][n];
        bool flag = false;
        if(tar - arr[n] >= 0){
            flag = flag or recc(n-1, tar-arr[n], arr);
        }
        flag = flag or recc(n-1, tar, arr);

        return dp[tar][n] = flag;
    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum%2) return false;
        dp.resize((sum/2)+1,vector<int>(n,-1));
        int ans = recc(n-1, sum/2, nums);
        return ans;   
    }
};