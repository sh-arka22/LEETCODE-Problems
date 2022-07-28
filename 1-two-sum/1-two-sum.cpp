class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int y = nums[i];
            int x = tar-y;
            if(mp.count(x)){
                return {mp[x],i};
            }
            mp[y] = i;
        }
        
        return {};
    }
};