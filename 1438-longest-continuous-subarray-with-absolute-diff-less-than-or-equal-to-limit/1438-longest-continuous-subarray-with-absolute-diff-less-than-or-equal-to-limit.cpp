class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        
        int l = 0, r = 0;
        
        multiset<int>st;
        
        for(int it:nums){
            st.insert(it);
            if(*st.rbegin() - *st.begin() > limit){
                st.erase(st.find(nums[l++]));
            }
            r++;
        }
        return r-l;
    }
};