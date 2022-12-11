class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int n = size(nums);
        map<int,int>mp;
        mp[nums[0]] = 1;
        for(int i=1;i<n;i++){
            int a = nums[i];
            int b = sqrt(nums[i]);
            if(a == b*b){
                mp[a] = 1+mp[b];
            }
            else mp[a] = 1;
        }
        
        int maxi = 0;
        for(auto &[key,val]:mp) maxi = max(maxi, val);
        
        return maxi<2 ? -1 : maxi;
    }
};