class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
        int i = 0, j = 0;
        int n = a.size(), m = b.size();
        vector<vector<int>>ans;
        while(i<n and j<m){
            int st = max(a[i][0], b[j][0]);
            int en = min(a[i][1], b[j][1]);
            
            if(st<=en){
                ans.push_back({st,en});
            }
            
            if(a[i][1] < b[j][1]) i++;
            else j++;
        }
        return ans;
    }
};