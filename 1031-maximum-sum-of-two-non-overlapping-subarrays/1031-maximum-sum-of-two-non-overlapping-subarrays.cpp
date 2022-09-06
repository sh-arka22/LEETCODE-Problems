class Solution {
public:
    
    int func(vector<int>&sum, int f, int s){
        int maxf = sum[f], maxfs = sum[f+s];
        for(int i=f+s+1;i<sum.size();i++){
            int currf = sum[i-s] - sum[i-s-f];
            int currs = sum[i] - sum[i-s];
            
            maxf = max(maxf, currf);
            maxfs = max(maxfs, maxf+currs);
        }
        return maxfs;
    }
    
    int maxSumTwoNoOverlap(vector<int>& nums, int f, int s) {
        vector<int>sum = {0};
        for(int x:nums) sum.push_back(sum.back()+x);
        return max(func(sum,f,s), func(sum,s,f));
    }
};