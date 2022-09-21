class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int l = 0, r = nums.size()-1;
        
        while(l<=r){
            int m = (l+r)/2;
            if(nums[m] == tar) return m;
            else if(nums[l] <= nums[m]){
                if(tar >= nums[l] and tar < nums[m]){
                    r = m-1;
                }
                else l = m+1;
            }
            else if(nums[m] <= nums[r]){
                if(tar > nums[m] and tar <= nums[r]){
                    l = m+1;
                }
                else r = m-1;
            }
        }
        return -1;
    }
};