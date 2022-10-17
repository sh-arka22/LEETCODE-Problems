class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int n = points.size();
        int ans = -(int)1e9;
        multiset<int>st;
        int j = 0;
        for(int i=0;i<n;i++){
            for(;j<n and points[j][0] - points[i][0] <= k;j++) st.insert(points[j][0]+points[j][1]);
            st.erase(st.find(points[i][0] + points[i][1])); //this coordinate cant be a part of the ans
            if(st.size()) ans = max(ans, points[i][1]-points[i][0]+*st.rbegin());
        }
        return ans;
    }
};