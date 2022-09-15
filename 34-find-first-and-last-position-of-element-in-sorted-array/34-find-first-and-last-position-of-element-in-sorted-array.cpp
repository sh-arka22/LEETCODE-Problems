class Solution {
private:
    int lower_bound(vector<int>& nums, int target){
        int n = nums.size();
        int s=0, e=n-1;
        int start = -1;
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid] == target)
            {
                start = mid;
                e = mid-1;
            }
            else if(nums[mid] > target)
                e = mid-1;
            else
                s = mid+1;
        }
        return start;
    }
    
    
    int upper_bound(vector<int>& nums, int target){
        int n = nums.size();
        int s=0, e=n-1;
        int end = -1;
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid] == target)
            {
                end = mid;
                s = mid+1;
            }
            else if(nums[mid] > target)
                e = mid-1;
            else
                s = mid+1;
        }
        return end;
    }
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        int l = lower_bound(nums, tar);
        int r = upper_bound(nums, tar);
        if(l != -1 and r != -1) return {l,r};
        return {-1,-1};
    }
};