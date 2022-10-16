//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int n;
	int *LIS;
int *LDS;
int LIS_LR(vector<int>& nums){
    int n = nums.size(), maxLen = 0;

    for(int i=0;i<n;i++){
        LIS[i] = 1;
        for(int j=i-1;j>=0;j--){
            if(nums[i] > nums[j]){
                LIS[i] = max(LIS[i], LIS[j] + 1); 
            }
        }
        maxLen = max(maxLen,LIS[i]);
    }
    return maxLen;
}

int LIS_RL(vector<int>& nums){
    int maxLen = 0;
    int n = nums.size();
    for(int i=n-1;i>=0;i--){
        LDS[i] = 1;
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j] and LDS[i]<LDS[j]+1){
                LDS[i] = LDS[j] + 1;
            }
        }
        maxLen = max(maxLen, LDS[i]);
    }
    return maxLen;
}


int LongestBitonicSequence(vector<int>nums){
    n = nums.size();
    LIS = new int[n];
    LDS = new int[n];
    int lis = LIS_LR(nums);
    int lds = LIS_RL(nums);
    int maxLen = 0;
    for(int i=0;i<n;i++){
        maxLen = max(maxLen, LDS[i]+LIS[i]-1);
    }
    return maxLen;
}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends