class Solution {
private:
    vector<int>dp;
    int recc(vector<int> &nums, int si, int ei){
        if(si == ei){
            return 0;
        }
        int mini = (int)1e9;
        if(dp[si] != -1) return dp[si];
        for(int i =1;i<=nums[si];i++){
            if(si+i>ei) continue;
            mini = min(mini, recc(nums, si+i, ei));
        }
        return dp[si] = mini+1;
    }
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int> jumps(n+1, 0);
        dp.resize(n+1, -1);
        for (int i=0; i<ranges.size(); i++) {
            int l = max(0, i-ranges[i]);
            int r = min(n, i+ranges[i]);
            jumps[l] = max(jumps[l], r-l);
        }
        int res = recc(jumps, 0, size(ranges)-1) == 1e9+1 ? -1 : recc(jumps, 0, size(ranges)-1);
        return res;
    }
};