class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int x:nums) mp[x]++;
        int cnt = 0;
        for(auto &[key,val]:mp){
            if(k>0 and mp.count(key+k)) cnt++;
            else if(k==0 and val>1) cnt++;
        }
        return cnt;
    }
};