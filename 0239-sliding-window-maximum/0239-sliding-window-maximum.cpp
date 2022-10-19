class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = size(nums);
        multiset<int>st;
        vector<int>ans;
        int l = 0, r = 0;
        while(r<k){
            st.insert(nums[r++]);
        }
        ans.push_back(*st.rbegin());
        st.erase(st.find(nums[l++]));
        
        while(r<n){
            st.insert(nums[r++]);
            if(st.size()>k) st.erase(st.find(nums[l++]));
            ans.push_back(*st.rbegin());
        }
        return ans;
    }
};