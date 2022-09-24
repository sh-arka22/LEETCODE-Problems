class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0 ;
        int maxi = -(int)1e9;
        for(int it:nums){
            sum += it;
            maxi = max(maxi, sum);
            sum = max(sum, 0);
        }
        return maxi;
    }
};