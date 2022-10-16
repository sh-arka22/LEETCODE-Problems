class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        int n = arr.size();
    int maxi = 1;
    vector<int>dp(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] and dp[j]+1 > dp[i])
                dp[i] = dp[j]+1;
        }
        maxi = max(maxi, dp[i]);
    }
    return maxi;
    }
};