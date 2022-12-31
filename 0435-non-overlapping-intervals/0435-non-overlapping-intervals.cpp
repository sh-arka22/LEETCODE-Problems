class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        auto cmp = [](vector<int>&a ,vector<int>&b){
            return a[1]<b[1];
        };
        sort(begin(intervals), end(intervals), cmp);
        int e = intervals[0][1];
        int n = size(intervals);
        int cnt = 0;
        for(int i=1;i<n;i++){
            if(intervals[i][0]<e){
                cnt ++;
            }
            else{
                e = intervals[i][1];
            }
        }
        return cnt;
    }
};