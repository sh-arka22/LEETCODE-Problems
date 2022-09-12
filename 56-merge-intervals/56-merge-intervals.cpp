class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(), intervals.end());
        for(auto interval:intervals){
            if(!ans.size()){
                ans.push_back(interval);
            }
            else{
                if(ans.back()[1] >= interval[0]){
                    ans.back()[1] = max(ans.back()[1], interval[1]);
                }
                else ans.push_back(interval);
            }
        }
        return ans;
    }
};