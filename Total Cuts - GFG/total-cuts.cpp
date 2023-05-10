//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        vector<int>pre(N, 0);
        for(int i=0;i<N;i++){
            if(i==0){
                pre[i] = A[i];
            }
            else pre[i] = max(pre[i-1], A[i]);
        }
        
        vector<int>suf(N, 1e9);
        for(int i=N-1;i>=0;i--){
            if(i==N-1){
                suf[i] = A[i];
            }
            else{
                suf[i] = min(suf[i+1], A[i]);
            }
        }
        int cnt = 0;
        for(int i=1;i<N;i++){
            if(pre[i-1]+suf[i]>=K) cnt++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends