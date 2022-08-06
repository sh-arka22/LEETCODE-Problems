class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int n = heights.size();
        int suff[n];
        
        suff[n-1] = heights[n-1];
        
        for(int i=n-2;i>=0;i--){
            suff[i] = max(suff[i+1],heights[i]);
        }
        
        for(int i=0;i<n-1;i++){
            if(heights[i]<=suff[i+1]){
                suff[i] = -1;
            }
        }
        
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(suff[i] != -1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};