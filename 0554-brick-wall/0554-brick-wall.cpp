class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int>map;
        for(int i=0;i<wall.size();i++){
            int preSum = 0;
            for(int j=0;j<wall[i].size()-1;j++){
                preSum += wall[i][j];
                map[preSum]++;
            }
        }
        int maxGap = 0;
        for(auto &[key,val]:map){
            maxGap = max(val,maxGap);
        }
        return size(wall)-maxGap;
    }
};