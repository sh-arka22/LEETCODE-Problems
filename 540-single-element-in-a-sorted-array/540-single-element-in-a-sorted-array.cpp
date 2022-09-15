class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n-1;
        if(r==0) return nums[0];
        else if(nums[0] != nums[1]) return nums[0];
        else if(nums[r] != nums[r-1]) return nums[r];
        
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] != nums[mid+1] and nums[mid] != nums[mid-1]) return nums[mid];
            if(mid %2 == 0){
                if(nums[mid] == nums[mid+1]) l = mid+1;
                else if(nums[mid] == nums[mid-1]) r = mid-1;
            }
            else if(mid % 2){
                if(nums[mid] == nums[mid+1]) r = mid-1;
                else if(nums[mid] == nums[mid-1]) l = mid+1;
            }
        }
        return -1;
    }
};