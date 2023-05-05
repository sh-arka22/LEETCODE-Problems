//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N) {
        // your code here
        sort(arr, arr+N);
        string res = "";
        string top = arr[0];
        string back = arr[N-1];
        
        int i=0, j=0;
        
        while(i<top.size() and j<back.size()){
            if(top[i] == back[j]) res += top[i];
            else break;
            i++, j++;
        }
        return res == "" ? "-1" : res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends