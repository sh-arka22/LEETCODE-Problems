class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int>st;
        
        for(auto num:nums){
            if(num%2) num*=2;
            st.insert(num);
        }
        int ans = 1e9;
        while(*st.rbegin()%2==0){
            ans = min(ans, *st.rbegin()-*st.begin());
            int curr = *st.rbegin();
            st.erase(curr);
            curr=curr/2;
            st.insert(curr);
        }
        ans = min(ans, *st.rbegin()-*st.begin());
        return ans;
    }
};