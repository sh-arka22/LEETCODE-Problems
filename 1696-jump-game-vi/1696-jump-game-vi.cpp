class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = size(nums);
        vector<int>dp(n,-1);
        dp[0] = nums[0];
        multiset<int>st;
        st.insert(nums[0]);
        for(int i=1;i<n;i++){
            dp[i] = nums[i]+*st.rbegin();
            st.insert(dp[i]);
            if(st.size()>=k+1){
                st.erase(st.find(dp[i-k]));
            }
        }
        return dp[n-1];
    }
};