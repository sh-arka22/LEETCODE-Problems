class Solution {
private:
    int LongestSubsetWithSumK(vector <int> arr, int k) {
        unordered_map<int, int> um;
        int sum = 0, maxLen = 0;
        int n = size(arr);
        // traverse the given array
        um[0] = -1; //-2 +1 -1  tar=0
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(um.find(sum-k) != um.end()){
                maxLen = max(maxLen, i-um[sum-k]);
            }
            if(um.find(sum)==um.end()){
                um[sum]=i;
            }
        }
        // required maximum length
        return maxLen;
    }
public:
    int findMaxLength(vector<int>& nums) {
        for(int &it:nums) 
            if(it==0) it = -1;
        return LongestSubsetWithSumK(nums, 0);
    }
};