class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        int n = intervals.size();
        
        vector<int>start, end;
        
        for(auto v:intervals){
            start.push_back(v[0]);
            end.push_back(v[1]);
        }
        
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        
        int cnt = 0;
        int maxi = INT_MIN;
        for(int i = 0, j = 0; i<n and j<n;){
            if(start[i]<end[j]){
                i++;
                cnt++;
            }else{
                j++;
                cnt--;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};