class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<=0) return 0;

        int i = 0, cnt = 0;
        unordered_map<int, int> prefixsum;
        int sum = 0;
        while(i<n) {
            sum+=nums[i];
            if(sum==k) cnt++;
            if(prefixsum.find(sum-k)!=prefixsum.end()) cnt+=prefixsum[sum-k];
            i++;
            prefixsum[sum]++;
        }
        return cnt;
    }
};