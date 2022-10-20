class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<=0) return 0;

        int i = 0, cnt = 0;
        unordered_map<int, int> prefixsum;
        prefixsum[0] = 1;
        int sum = 0;
        while(i<n) {
            sum+=nums[i];
            if(prefixsum.find(sum-k)!=prefixsum.end()) 
                cnt+=prefixsum[sum-k];
            if(prefixsum.find(sum)==prefixsum.end()){
                prefixsum[sum] = 1;
            }
            else prefixsum[sum] += 1;
            i++;
        }
        return cnt;
    }
};