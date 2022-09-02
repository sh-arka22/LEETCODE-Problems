class Solution {
public:
    int *dp;
    int permutationTable(vector<int>&conis, int Tar){
        dp[0] = 0;
        for(int tar = 1; tar<=Tar; tar++){
            for(int ele: conis){
                if(tar - ele >= 0){
                    dp[tar] = min(dp[tar], dp[tar - ele]+1);
                }
            }
        }
        return dp[Tar] != (int)1e9 ? dp[Tar] : -1;
    }

    int coinChange(vector<int>& coins, int amount) {
        dp = new int[amount+1];
        fill(dp, dp + amount+1, (int)1e9);
        return permutationTable(coins, amount);  
    }
};