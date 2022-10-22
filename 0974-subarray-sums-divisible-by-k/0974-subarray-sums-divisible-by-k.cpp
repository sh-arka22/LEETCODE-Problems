class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int sum = 0;
        int  cnt = 0;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            int rem = (k + sum%k)%k;
            if(mp.find(rem) != mp.end()){
                cnt += mp[rem];
            }
            if(mp.find(rem) == mp.end()){
                mp[rem] = 1;
            }
            else mp[rem]++;
        }
        return cnt;
    }
};