class Solution {
private:
    int solve(vector<int> &nums, int n){
        if(n==0)
            return nums[0];
        
        for(int i=0;i<n-1;i++){
            nums[i] = (nums[i]+nums[i+1])%10;
        }
        
        return solve(nums, n-1);
    }
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        return solve(nums,n);
    }
};