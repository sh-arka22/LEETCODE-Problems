class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 1;
        int prev = nums[0];
        
        for(int i=1;i<n;i++){
            if(nums[i] != prev){
                if(--cnt == 0) prev = nums[i], cnt++;
            }
            else cnt++;
        }
        
        // cnt = 0;
        // for(auto it:nums) cnt += (it == prev);
        
        return prev;
    }
};