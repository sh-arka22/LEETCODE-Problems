class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size();
        unordered_map<int,int> Count;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                int sum = nums1[i]+nums2[j];
                Count[sum]++;
            }
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                int sum = nums3[i]+nums4[j];
                if(Count.find(-sum) != Count.end())
                    ans += Count[-sum];
            }
        }
        return ans;
    }
};