class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        if(nums.size() == 0) return {-1,-1};
        int l = lower_bound(nums.begin(), nums.end(), tar)-nums.begin();
        int r = upper_bound(nums.begin(), nums.end(), tar)-nums.begin()-1;
        cout<<l<<" "<<r;
        if(l < nums.size() and r < nums.size() and nums[l] == tar and nums[r] == tar) return {l,r};
        return {-1,-1};
    }
};