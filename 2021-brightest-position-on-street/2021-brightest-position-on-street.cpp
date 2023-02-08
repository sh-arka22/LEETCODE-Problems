class Solution {
public:
    int brightestPosition(vector<vector<int>>& lights) {
        map<int,int> count;
        for(auto interval:lights){
            int start=interval[0]-interval[1];
            int end=interval[0]+interval[1];
            count[start]++;
            count[end+1]--;
        }
        int maxi = 0;
        int res_ind=1;
        int sum = 0;
        for(auto [idx, val]:count){
            int cur = sum + val;
            sum = cur;
            if(cur > maxi){
                maxi = cur;
                res_ind = idx;
            }
        }
        return res_ind;
    }
};