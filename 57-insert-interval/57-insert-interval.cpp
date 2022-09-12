class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int n = intervals.size();
        if(n == 0){
            vector<vector<int>>tmp;
            tmp.push_back(newInterval);
            return tmp;
        }
        int pos = 0;
        for(auto interval:intervals){
            if(interval[0]>=newInterval[0]){
                break;
            }
            ans.push_back(interval);
            pos++;
        }
        if(ans.size() == 0){
            ans.push_back(newInterval);
        }
        else{
            if(ans.back()[1] < newInterval[0]){
                ans.push_back(newInterval);
            }
            else{
                ans.back()[1] = max(ans.back()[1], newInterval[1]);
            }
        }
        
        while(pos<n){
            if(intervals[pos][0] <= ans.back()[1])
                ans.back()[1] = max(intervals[pos++][1], ans.back()[1]);
            else ans.push_back(intervals[pos++]);
        }
        
        return ans;
    }
};