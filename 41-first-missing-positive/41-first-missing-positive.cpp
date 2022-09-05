class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nums[i] = 0;
            }
        }
        for(int i=0;i<n;i++){
            int idx = abs(nums[i]);
            if(idx>0 and idx<=n){
                if(nums[idx-1] == 0){
                    nums[idx-1] = INT_MIN;
                }
                else if(nums[idx-1]>0)
                    nums[idx-1] *= -1;
            }
        }
        
        for(int i=1;i<=n;i++){
            if(nums[i-1]>=0){
                return i;
            }
        }
        return n+1;
    }
};