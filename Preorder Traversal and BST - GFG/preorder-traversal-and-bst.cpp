//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int canRepresentBST(int arr[], int N) {
       int root =-1;
       vector<int>st;
       for(int i=0;i<N;i++) {
           if(arr[i]<root) return false;
           while(!st.empty()&&arr[i]>st.back()){
               root=st.back();
               st.pop_back();
           }
           st.push_back(arr[i]);
       }
       return true;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        Solution ob;
        cout << ob.canRepresentBST(arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends