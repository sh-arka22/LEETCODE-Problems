//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
int subarraysDivByK(int nums[],int n, int k) {
        unordered_map<int,int>mp;
        int sum = 0;
        int  len = 0;
        mp[0] = -1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            int rem = (k + sum%k)%k;
            if(mp.find(rem) != mp.end()){
                len = max(len, i-mp[rem]);
                // cnt += mp[rem];
            }
            if(mp.find(rem) == mp.end()){
                mp[rem] = i;
            }
            // else mp[rem]++;
        }
        return len;
    }
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    return subarraysDivByK(arr, n, k);
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends