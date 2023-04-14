//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int n, vector<int> color, vector<int> radius) {
        vector<array<int, 2>>stack;
        for(int i=0;i<n;i++){
            int clr = color[i], rad = radius[i];
            if(!stack.size() or stack.back()[0] != clr or stack.back()[1] != rad){
                stack.push_back({color[i], radius[i]});
            }
            else{
                while(stack.size() and stack.back()[0]==clr and stack.back()[1]==rad){
                    stack.pop_back();
                }
            }
        }
        return stack.size();
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends