class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        for(auto it: nums1) nums.push_back(it);
        for(auto it: nums2) nums.push_back(it);
        
        sort(begin(nums), end(nums));
        
        int n = nums.size();
        double ans;
        if(n%2){
            int x = (n+1)/2;
            ans = (double)nums[x-1];
        }
        else{
            int x = n/2;
            cout<<x;
            ans = (double)((nums[x]+nums[x-1]))/2;
        }
        return ans;
    }
};