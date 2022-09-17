class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int last = nums[0];
        for(int i=0; i<=last; i++){
            last = max(last,i+nums[i]);
            if(last >= n-1) return true;
        }
        return false;
    }
};