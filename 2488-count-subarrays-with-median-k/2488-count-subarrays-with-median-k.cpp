class Solution {
public:
    int countSubarrays(vector<int>& nums, int k) {
        map<int,int>mp;
        int idx = -1;
        int i = 0;
        for(int &it:nums){
            if(it<k) it = -1;
            else if(it==k){
                idx = i;
                it = 0;
            }
            else it = 1;
            i++;
        }
        
        int suffix = 0;
        mp[0]++;
        for(int j = idx+1;j<i;j++){
            suffix += nums[j];
            mp[suffix]++;
        }
        int pre = 0;
        int cnt = 0;
        cnt += mp[0] + mp[1];
        for(int j=idx-1;j>=0;j--){
            pre += nums[j];
            cnt += mp[-pre] + mp[1-pre];
        }
        return cnt;
    }
};