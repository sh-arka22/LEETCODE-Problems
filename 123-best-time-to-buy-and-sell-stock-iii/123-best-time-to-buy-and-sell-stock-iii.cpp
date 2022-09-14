class Solution {
private:
    vector<vector<vector<int>>> dp;
    int getAns(vector<int>& Arr, int n, int ind, int buy, int cap){

        if(ind==n || cap==0) return dp[ind][cap][buy] = 0; //base case

        if(dp[ind][cap][buy]!=-1)
            return dp[ind][cap][buy];

        int profit;

        if(buy==0){// We can buy the stock
            profit = max(0+getAns(Arr,n,ind+1,0,cap), 
                        -Arr[ind] + getAns(Arr,n,ind+1,1,cap));
        }

        if(buy==1){// We can sell the stock
            profit = max(0+getAns(Arr,n,ind+1,1,cap),
                        Arr[ind] + getAns(Arr,n,ind+1,0,cap-1));
        }

        return dp[ind][cap][buy] = profit;
    }    
public:
    int maxProfit(vector<int>& prices)
    {   int n = prices.size();
        // Creating a 3d - dp of size [n][2][3]
        dp.resize(n+1,vector<vector<int>>(3,vector<int>(2,-1)));

        return getAns(prices,n,0,0,2);

    }
};