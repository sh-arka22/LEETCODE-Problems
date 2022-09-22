class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        
        vector<int>res(n, -1);
        stack<int>st;
        for(int i=2*n-1; i>=0; i--){
            while(st.size() and nums[i%n]>=st.top()) st.pop();
            if(st.size()) res[i%n] = st.top();
            st.push(nums[i % n]);
        }
        return res;
    }
};