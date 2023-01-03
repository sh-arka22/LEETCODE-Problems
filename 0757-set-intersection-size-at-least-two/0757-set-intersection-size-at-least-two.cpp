class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b) {
        if(a[1] == b[1])
            return a[0] < b[0];
        else
            return a[1] < b[1];
    }
    
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), compare);
        vector<int> res;
        res.push_back(intervals[0][1] - 1);
        res.push_back(intervals[0][1]);
        for(int i = 1; i < n; i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(start > res.back()) {
                res.push_back(end - 1);
                res.push_back(end);
            }
            else if(start == res.back()) {
                res.push_back(end);
            }
            else if(start > res[res.size() - 2]) {
                res.push_back(end);
            }
        }
        return res.size();
    }
};
/**
This solution first sorts the intervals array using a custom compare function that compares the endpoints of the intervals. The intervals are sorted in ascending order by their endpoints, with ties broken by the startpoint of the interval.

Then, the solution initializes an empty vector called res and adds the last two elements of the first interval to it. This ensures that we have at least two integers from the first interval in the res vector.

The solution then iterates through the rest of the intervals and checks the startpoint of each interval. If the startpoint is after the last element of the res vector, the solution adds the last two elements of the interval to the res vector. If the startpoint is the same as the last element of the res vector, the solution only adds the last element of the interval to the res vector. If the startpoint is after the second to last element but before the last element of the res vector, the solution only adds the last element of the interval to the res vector.

Finally, the solution returns the size of the res vector, which is the minimum size of a containing set.

*/