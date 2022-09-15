class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
        int n = nums.size();
        int floor = -1;
        int l = 0, r = n-1;
        
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == tar) return mid;
            else if(nums[mid]<tar){
                floor = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        
        return floor+1;
    }
};