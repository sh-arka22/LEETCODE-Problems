class Solution {
public:
    vector<vector<int>>kSum(vector<int>& nums, int k, int tar, int si, int ei){
        vector<vector<int>>ans;
        if(ei-si+1 < k) return ans;
        if(k==2){
            int i = si, j = ei;
            while(i<j){
                // if(i>si and nums[i++] == nums[i-1]) continue;
                int sum = nums[i] + nums[j];
                if(sum == tar){
                    ans.push_back({nums[i],nums[j]});
                    while(i < j && nums[i] == nums[++i]);
                    while(i < j && nums[j] == nums[--j]);
                }
                else if(sum>tar) j--;
                else i++;
            }
           return ans;
        }
        else{
            
            for(int i=si;i<=ei;i++){
                if(i>si and nums[i] == nums[i-1]) continue;
                long long tar2 = (long long)tar-nums[i];
                if(tar2 > INT_MAX or tar2 < INT_MIN) continue;
                vector<vector<int>>subSum = kSum(nums, k-1, tar-nums[i], i+1, ei);
                for(auto vv:subSum){
                    vv.push_back(nums[i]);
                    ans.push_back(vv);
                }
            }
        }
        return ans;
    }
    vector<vector<int>> fourSum(vector<int>& nums, int tar) {
        sort(begin(nums), end(nums));
        return kSum(nums, 4, tar, 0, nums.size()-1);
    }
};