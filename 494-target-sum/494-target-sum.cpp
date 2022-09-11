class Solution {
private:
int findWaysUtil(int ind, int target, vector<int>& arr, vector<vector<int>> &dp){
    if(ind == 0){
        if(target == 0 and arr[0] == 0) return 2; // arr->{0}={},{0}
        if(target == 0 or target == arr[0]) return 1;
        return 0;
    }
    
    if(dp[ind][target]!=-1)
        return dp[ind][target];
        
    int notTaken = findWaysUtil(ind-1,target,arr,dp);
    
    int taken = 0;
    if(arr[ind]<=target)
        taken = findWaysUtil(ind-1,target-arr[ind],arr,dp);
        
    return dp[ind][target]= (notTaken + taken)%1000000007;
}

int countPartitions(int n, int d, vector<int> &arr) {
    // Write your code here.
    int total = accumulate(begin(arr), end(arr), 0);
    if(d>total) return 0;
    int s1 = (d+total);
    if(s1%2) return 0;
    s1 = s1 >> 1;
    vector<vector<int>> dp(n,vector<int>(abs(s1+1),-1));
    return findWaysUtil(n-1,s1,arr,dp);
}


int targetSum(int n, int target, vector<int>& arr) {
    // Write your code here.
    return countPartitions(n, target, arr);
}
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return targetSum(n, target, nums);
    }
};