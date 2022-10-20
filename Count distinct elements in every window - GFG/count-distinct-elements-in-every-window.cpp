//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        //code here.
        vector<int>ans;
    int i = 0, j = 0;
    unordered_map<int,int>map;
    while(j<k-1){
        map[arr[j]]++;
        j++;
    }

    while(j<n){
        map[arr[j]]++;
        ans.push_back(map.size());
        map[arr[i]]--;
        if(map[arr[i]] == 0) map.erase(arr[i]);
        i++, j++;
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends