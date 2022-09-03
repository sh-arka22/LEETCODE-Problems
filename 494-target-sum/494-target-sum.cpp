class Solution {
public:
    int recc(vector<int> &nums, int n, int tar){
        if(n==0) return tar==0;

        int cnt = 0;

        cnt += recc(nums,n-1, tar - (nums[n-1]));
        cnt += recc(nums,n-1, tar - (-nums[n-1]));

        return cnt;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(begin(nums), end(nums), 0);
        if(sum < target or sum < -target) return 0;

        return recc(nums,nums.size(), target);
    }
};