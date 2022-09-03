class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int i = 0;
        
        while(i < right)
        {
            if(nums[i] % 2)
            {
                swap(nums[i], nums[right]);
                --right;
            }
            else
            {
                ++i;
                
            }
        }
        return nums;
    }
};