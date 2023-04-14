//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  private:
    int search(int arr[], int n, int k){
        int l = 0, r = n;
        while(l<r){
            int m = (l+r)>>1;
            if(arr[m]<k){
                l = m+1;
            }
            else r = m;
        }
        return l;
    }
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int idx = search(arr, n, k);
        // cout<<idx<<" ";
        if(idx == n or arr[idx] != k) return -1;
        return idx;
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
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends