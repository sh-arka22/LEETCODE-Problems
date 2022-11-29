class Solution {
private:
    vector<vector<int>>dp;
    void dpfill(){
        for(vector<int> &v:dp){
            for(int &it:v){
                it = -1;
            }
        }
    }
    int recc(vector<int>&v, int k, int i, int n){
        if(k<=0 or i>=n) return 0;
        if(dp[k][i] != -1) return dp[k][i];
        int pick = v[i] + recc(v, k-1, i+2, n);
        int notpick = recc(v, k, i+1, n);
        return dp[k][i] = max(pick, notpick);
    }
public:
    int maxSizeSlices(vector<int>& slices) {
        vector<int>v1;
        vector<int>v2;
        int n = size(slices);
        for(int i=0;i<n;i++){
            if(i<n-1){
                v1.push_back(slices[i]);
            }
            if(i>0){
                v2.push_back(slices[i]);
            }
        }
        dp.resize(n, vector<int>(n,-1));
        int one = recc(v1, n/3, 0, n-1);
        dpfill();
        int two = recc(v2, n/3, 0, n-1);
        return max(one, two);
    }
};