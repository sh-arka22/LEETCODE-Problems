class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int n = nums.size();
        int l = 0, r = n-1;
        while(l<=r){
            int m =(l+r)/2;
            if(nums[m] == tar) return m;
            if(nums[l]<=nums[m]){
                if(tar<nums[m] and tar>=nums[l])
                    r = m-1;
                else l = m+1;
            }
            else if(nums[r]>=nums[m]){
                if(tar>nums[m] and tar<=nums[r])
                    l = m+1;
                else r = m-1;
            }
        }
        return -1;
    }
};