//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxCoins(int n,vector<vector<int>> &ranges){
        // Code here
        sort(ranges.begin(),ranges.end()); // sort in the increasing order of the starting point
        int maximum[n];
        maximum[n-1]=ranges[n-1][2];
        for(int i=n-2;i>=0;i--){
            maximum[i]=max(maximum[i+1],ranges[i][2]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int l = i + 1;
            int h = n - 1;
            int end = ranges[i][1];
            while(l<=h){
                int mid = l + (h-l)/2;
                if(ranges[mid][0]>=end){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            if(l==n)
            ans=max(ans,ranges[i][2]+0); // agar lower bound out of bound ho matlab koi dusra element iske sath nahi mila so add +0
            else ans=max(ans,ranges[i][2]+maximum[l]); // else add second element if l < n
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(3));
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        }
        Solution ob;
        cout<<ob.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends