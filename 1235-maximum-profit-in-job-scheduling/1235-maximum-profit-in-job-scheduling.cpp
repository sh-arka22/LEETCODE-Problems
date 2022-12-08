class Solution {
private:
    int n;
    vector<int>dp;
    int recc(vector<array<int,3>>& jobs, vector<int>& startTime, int idx){
        if(idx>=n) return 0;
        int nextIdx = lower_bound(startTime.begin(), startTime.end(), jobs[idx][1]) - startTime.begin();
        if(dp[idx] != -1) return dp[idx];
        int pick = jobs[idx][2] + recc(jobs, startTime, nextIdx);
        int notPick = recc(jobs, startTime, idx+1);
        return dp[idx] = max(pick, notPick);
    }
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<array<int,3>>jobs;
        n = size(startTime);
        dp.resize(n+1,-1);
        for(int i=0;i<n;i++){
            jobs.push_back({startTime[i], endTime[i], profit[i]});
        }
        sort(begin(jobs), end(jobs));
        sort(begin(startTime), end(startTime));
        
        return recc(jobs, startTime, 0);
    }
};