class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        // vector<int>dp(n,0);
        int curr = 0;
        int prev = 0;
        int res = 0;
        for(int i=2;i<n;i++){
            if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2]){
                curr = prev+1;
            }
            else{
                curr = 0;
            }
            res += curr;
            prev = curr;
        }
        return res;
    }
};