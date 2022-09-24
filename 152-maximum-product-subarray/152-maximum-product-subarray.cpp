class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mini = 1;
        int maxi = 1;
        int ans = -(int)1e9;
        for(int it:nums){
            if(it<0) swap(mini, maxi);
            maxi = max(it*maxi, it);
            mini = min(mini*it, it);
            ans = max(ans, maxi);
        }
        return ans;
    }
};