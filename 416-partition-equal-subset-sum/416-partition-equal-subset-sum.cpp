class Solution {
public:
    vector<vector<int>>dp;
bool tabu(int N, int Tar, vector<int>&arr){
    for(int n=0; n<=N;n++){
        for(int tar=0;tar<=Tar;tar++){
            if(n==0 or tar ==arr[n]){
                dp[tar][n] = (tar==arr[n]);
                continue;
            }
            bool flag = false;
            if(tar - arr[n] >= 0){
                flag = flag or dp[tar-arr[n]][n-1];
            }
            flag = flag or dp[tar][n-1];

            dp[tar][n] = flag;
        }
    }
    return dp[Tar][N];
}

bool canPartition(vector<int>& nums) {
    int n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if(sum%2) return false;
    dp.resize((sum/2)+1,vector<int>(n,0));
    int ans = tabu(n-1, sum/2, nums);
    dp.clear();
    return ans ;   
}
};