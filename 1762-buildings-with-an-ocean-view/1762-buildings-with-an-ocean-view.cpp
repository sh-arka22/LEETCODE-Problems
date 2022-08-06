class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int n = heights.size();
        int maxi = 0;
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            if(heights[i]<=maxi){
                heights[i] = -1;
            }
            maxi = max(maxi,heights[i]);
        }
        for(int i=0;i<n;i++){
            if(heights[i] != -1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};