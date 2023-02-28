class Solution {
public:
    bool isReflected(vector<vector<int>>& points) {
        unordered_set<string>st;
        int mini = 1e9;
        int maxi = -1e9;
        for(auto point: points){
            int x = point[0], y = point[1];
            mini = min(mini, x);
            maxi = max(maxi, x);
            string p = to_string(x) + "|" + to_string(y);
            st.insert(p);
        }
        int sum = maxi + mini;
        for(auto point: points){
            int x = point[0], y = point[1];
            int x2 = sum-x;
            string p = to_string(x2) + "|" + to_string(y);
            if(st.count(p) == 0) return false;
        }
        return true;
    }
};