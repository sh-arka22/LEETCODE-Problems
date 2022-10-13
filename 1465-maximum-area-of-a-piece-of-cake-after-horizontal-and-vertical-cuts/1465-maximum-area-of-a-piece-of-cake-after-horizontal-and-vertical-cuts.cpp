class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int n = horizontalCuts.size();
        int m = verticalCuts.size();
        sort(begin(horizontalCuts), end(horizontalCuts));
        sort(begin(verticalCuts), end(verticalCuts));
        int max_h = max(horizontalCuts[0], h-horizontalCuts.back());
        int max_c = max(verticalCuts[0], w-verticalCuts.back());
        for(int i=1;i<n;i++){
            max_h = max(max_h, horizontalCuts[i]-horizontalCuts[i-1]);
        }
        for(int i=1;i<m;i++){
            max_c = max(max_c, verticalCuts[i]-verticalCuts[i-1]);
        }
        long long var = (long long)(max_h%1000000007) * (long long)(max_c%1000000007);
        return (var)%1000000007;
    }
};