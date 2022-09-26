class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(begin(nums), end(nums));
        int l = 0, r = 0;
        int res = 0;
        long sum = 0;
        while(r<n){
            sum+=nums[r];
            while((long)nums[r]*(r-l+1) > sum+k) sum -= nums[l++];
            res = max(res, r-l+1);
            r++;
        }
        return res;
    }
};