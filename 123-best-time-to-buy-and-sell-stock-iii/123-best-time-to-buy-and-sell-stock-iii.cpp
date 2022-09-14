class Solution {
private:
int getAns(vector<int>& Arr, int n, int ind, int buy, int cap, vector<vector<vector<int>>>& dp ){

    if(ind==n || cap==0) return 0; //base case
    
    if(dp[ind][buy][cap]!=-1)
        return dp[ind][buy][cap];
        
    int profit;
    
    if(buy==0){// We can buy the stock
        profit = max(0+getAns(Arr,n,ind+1,0,cap,dp), 
                    -Arr[ind] + getAns(Arr,n,ind+1,1,cap,dp));
    }
    
    if(buy==1){// We can sell the stock
        profit = max(0+getAns(Arr,n,ind+1,1,cap,dp),
                    Arr[ind] + getAns(Arr,n,ind+1,0,cap-1,dp));
    }
    
    return dp[ind][buy][cap] = profit;
}    
public:
int maxProfit(vector<int>& prices)
{   int n = prices.size();
    // Creating a 3d - dp of size [n][2][3]
    vector<vector<vector<int>>> dp(n,
                                    vector<vector<int>> 
                                            (2,vector<int>(3,-1)));
    
    return getAns(prices,n,0,0,2,dp);
   
}
};