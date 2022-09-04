class Solution {
public:
    int count(vector<int>&nums, int bound){ // count of subarrays till boundary
        int cnt = 0, len = 0;
        for(int x:nums){
            if(x<=bound){
                len  += 1;
                cnt += len;
            }
            else len = 0;
        }
        return cnt;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return count(nums, right) - count(nums, left-1);
    }
};