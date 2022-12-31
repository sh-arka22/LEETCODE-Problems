class Solution {
private:
    void insertInterval(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int index = upper_bound(intervals.begin(), intervals.end(), newInterval) - intervals.begin();
        
        if (index != intervals.size()) {
            intervals.insert(intervals.begin() + index, newInterval);
        } else {
            intervals.push_back(newInterval);
        }
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        
        int n = size(intervals);
        ans.push_back(intervals[0]);
        for(int i=1; i<n; i++){
            if(intervals[i][0]<=ans.back()[1]){
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
            else ans.push_back(intervals[i]);
        }
        return ans;
    }
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        insertInterval(intervals, newInterval);
        return merge(intervals);
    }
};