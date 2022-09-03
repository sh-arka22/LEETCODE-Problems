class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int>pre(n,1), suf(n,1), ans(n);
        
        for(int i=1;i<n;i++){
            suf[i] = (nums[i-1]*suf[i-1]);
        }
        for(int i = n-2;i>=0;i--){
            pre[i] = (nums[i+1]*pre[i+1]);
        }
        
        for(int i=0;i<n;i++){
            ans[i] = suf[i]*pre[i];
        }
        
        return ans;
    }
};