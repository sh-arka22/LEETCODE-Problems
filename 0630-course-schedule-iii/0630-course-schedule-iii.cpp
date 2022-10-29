class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(begin(courses), end(courses), [](const vector<int>&a, const vector<int>&b){return a[1]<b[1];});
        priority_queue<int> que;
        int sum = 0;
        for(auto course:courses){
            sum+=course[0];
            que.push(course[0]);
            if(sum>course[1]){
                sum-=que.top();
                que.pop();
            }
        }
        return que.size();
    }
};