//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
vector<vector<string>>sDP;
vector<vector<int>>dp;
int n;
string TABULISATION(int arr[], int SI, int EI){
     //stores the string
    for(int gap = 1; gap<n; gap++){
        for(int si = 0, ei = gap; ei<n; si++, ei++){
            if(ei-si == 1){
                dp[si][ei] = 0;
                string s(1,(char)('A'+si));
                sDP[si][ei] = s;
                continue;
            }
            int mini = (int)1e9;
            string minStr = "";
            for(int cut = si+1; cut<ei; cut++){
                int left = dp[si][cut];
                int right = dp[cut][ei];
                // mini = min(mini, left + right + arr[si]*arr[cut]*arr[ei]);
                if(left+right+arr[si]*arr[cut]*arr[ei] < mini){
                    mini = left + right + arr[si]*arr[cut]*arr[ei];
                    minStr = "(" + sDP[si][cut] + sDP[cut][ei] + ")";
                }
            }
            sDP[si][ei] = minStr;
            dp[si][ei] = mini;
        }
    }
    // cout<<sDP[SI][EI];
    return sDP[SI][EI];
}
    string matrixChainOrder(int p[], int n){
        // code here
        this->n = n;
        int si = 0, ei = n-1;
    dp.resize(n+1, vector<int>(n+1,0));
    sDP.resize(n+1, vector<string>(n+1, ""));
    return TABULISATION(p, 0, ei);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i = 0;i < n;i++)
            cin>>p[i];
        
        Solution ob;
        cout<<ob.matrixChainOrder(p, n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends