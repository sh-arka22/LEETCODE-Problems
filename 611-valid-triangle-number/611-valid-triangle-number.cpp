class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size(), c = 0;
        sort(nums.begin(), nums.end());
        for(int i=1; i<n-1; i++)
            for(int j=0; j<i; j++)
                c += (lower_bound(nums.begin()+i+1, nums.end(), nums[j]+nums[i])-nums.begin())-i-1;
        return c;
    }
};