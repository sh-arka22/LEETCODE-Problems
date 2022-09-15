class Solution {
private:
    int lower_bound(vector<int>& nums, int tar){
        int idx = -1;
        int l = 0, r = nums.size()-1;
        
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == tar){
                idx = mid;
                r = mid-1;
            }
            else if(nums[mid]<tar) l = mid+1;
            else r = mid-1;
        }
        return idx;
    }
    
    int upper_bound(vector<int>& nums, int tar){
        int idx = -1;
        int l = 0, r = nums.size()-1;
        
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == tar){
                idx = mid;
                l = mid+1;
            }
            else if(nums[mid]<tar) l = mid+1;
            else r = mid-1;
        }
        return idx;
    }
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        int l = lower_bound(nums, tar);
        int r = upper_bound(nums, tar);
        if(l != -1 and r != -1) return {l,r};
        return {-1,-1};
    }
};