class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        
        for(int i=0;i<n;i++){
            nums[i]*=nums[i];
        }
        
        int i = 0, j = n-1, k = n-1;
        
        while(k>=0){
            if(nums[i]>nums[j]){
                ans[k--] = nums[i++];
            }
            else{
                ans[k--] = nums[j--];
            }
        }
        return ans;
    }
};