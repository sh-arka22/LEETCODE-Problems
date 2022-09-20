class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& nums) {
        int n = nums.size();
        int ans = (int)1e9;
        int si = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            while(sum>=tar){
                ans = min(ans, i-si+1);
                sum -= nums[si++];
            }
        }
        return (ans != (int)1e9) ? ans : 0;
    }
};