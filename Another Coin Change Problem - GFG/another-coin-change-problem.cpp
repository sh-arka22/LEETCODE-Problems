//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
public:
    bool solve(int i, int n, int k, int target, vector<int>& coins, vector<vector<vector<int>>>& dp) {
        if(target<=0 or k<=0 or i>=n){
            if(target==0 and k==0) return true;
            return false;
        }
        if(dp[i][target][k] != -1) return dp[i][target][k];
        bool notpick = solve(i + 1, n, k, target, coins, dp);
        bool pick = solve(i, n, k-1, target-coins[i], coins, dp);;
        return dp[i][target][k] = pick || notpick;
    }

    bool makeChanges(int n, int k, int target, vector<int>& coins) {
        vector<vector<vector<int>>> dp (n, vector<vector<int>> (target+1, vector<int> (k+1, -1)));
        return solve(0, n, k, target, coins, dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        int target;
        scanf("%d", &target);

        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);

        cout << res << endl;
    }
}

// } Driver Code Ends