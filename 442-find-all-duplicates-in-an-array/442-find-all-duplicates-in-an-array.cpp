class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        int n = nums.size();
        if(n==1) return {};
        for(auto n:nums){
            if(nums[abs(n)-1]>0){
                nums[abs(n)-1] = - nums[abs(n)-1];
            }
            else{
                v.push_back(abs(n));
            }
        }
        return v;
    }
};