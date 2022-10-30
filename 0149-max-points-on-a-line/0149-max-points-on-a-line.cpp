class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans = 0;
        int n = points.size();
        if(n < 3)
            return n;
        for(int i = 0;i<n;i++){
            map<array<int,2>, int> mp;
            for(int  j = 0;j<n;j++){
                if(i != j){
                    int dy = (points[j][1] - points[i][1]);
                    int dx = (points[j][0] - points[i][0]);
                    int g = __gcd(dy,dx);
                    mp[{dx/g,dy/g}]++;
                }
            } 
            for(auto k : mp){
                ans = max(ans,k.second);
            }
        }
        return ans+1;// extra 1 because it didn't indclue itself.
    }
};