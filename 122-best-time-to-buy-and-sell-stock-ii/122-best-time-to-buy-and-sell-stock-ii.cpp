class Solution {
private:
    long getAns(long *Arr, int ind, int buy, int n, vector<vector<long>> &dp ){

        if(ind==n) return 0; //base case

        if(dp[ind][buy]!=-1)
            return dp[ind][buy];

        long profit;

        if(buy==0){// We can buy the stock
            profit = max(0+getAns(Arr,ind+1,0,n,dp), getAns(Arr,ind+1,1,n,dp)-Arr[ind] );
        }

        else if(buy==1){// We can sell the stock
            profit = max(0+getAns(Arr,ind+1,1,n,dp), Arr[ind] + getAns(Arr,ind+1,0,n,dp));
        }

        return dp[ind][buy] = profit;
    }


    long getMaximumProfit(long *Arr, int n) {
        //Write your code here

        vector<vector<long>> dp(n,vector<long>(2,-1));

        if(n==0) return 0;
        long ans = getAns(Arr,0,0,n,dp);
        return ans;
    }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        long arr[n];
        for(int i=0;i<n;i++) arr[i] = prices[i];
        return getMaximumProfit(arr, n);
    }
};