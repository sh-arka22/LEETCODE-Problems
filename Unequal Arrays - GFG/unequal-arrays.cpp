//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
        using ll = long long;
        vector<ll> even1, even2, odd1, odd2;
        for(int it: A){
            it%2 ? odd1.push_back(it) : even1.push_back(it);
        }
        for(int it: B){
            it%2 ? odd2.push_back(it) : even2.push_back(it);
        }
        
        sort(even1.begin(),even1.end());
        sort(even2.begin(),even2.end());
        sort(odd1.begin(),odd1.end());
        sort(odd2.begin(),odd2.end());
        if(even1.size() != even2.size() or odd1.size() != odd2.size()) return -1;
        ll a = accumulate(A.begin(), A.end(), 0ll);
        ll b = accumulate(B.begin(), B.end(), 0ll);
        if(a != b) return -1;
        ll res = 0;
        for(int i=0;i<even1.size();i++){
            res += abs(even1[i]-even2[i])/2;
        }
        for(int i=0;i<odd1.size();i++){
            res += abs(odd1[i]-odd2[i])/2;
        }
        
        return res/2;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        
        vector<int> B(N);
        Array::input(B,N);
        
        Solution obj;
        long long res = obj.solve(N, A, B);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends