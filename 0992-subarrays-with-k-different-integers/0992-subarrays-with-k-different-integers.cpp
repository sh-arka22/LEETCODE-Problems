class Solution {
private:
    int longestLengthWithAtMostKdifferentIntegers(vector<int>& nums, int k){
        unordered_map<int,int>mp;
        int si = 0, ei = 0, n = nums.size();
        int cnt = 0;
        while(ei<n){
            mp[nums[ei]]++;
            while(mp.size()>k){
                mp[nums[si]]--;
                if(!mp[nums[si]]){
                    mp.erase(nums[si]);
                }
                si++;
            }
            cnt += (ei-si+1);
            ei++;
        }
        return cnt;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        if(k>nums.size())
            return 0;
        return longestLengthWithAtMostKdifferentIntegers(nums,k) - longestLengthWithAtMostKdifferentIntegers(nums,k-1);
    }
};