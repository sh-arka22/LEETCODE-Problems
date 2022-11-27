class Solution {
    const static int N = 1e5;
    bool vis[N];
    int recc(vector<int>& nums,int idx, int k, int sumSF, int tar){
        if(k==0) return 1;
        if(sumSF > tar) return 0;
        if(tar == sumSF){
            return recc(nums, 0, k-1, 0, tar);
        }
        int res = 0;
        for(int i = idx; i<nums.size();i++){
            if(vis[i]) continue;

            vis[i] = 1;
            res = res or recc(nums, i+1, k, sumSF+nums[i], tar);
            vis[i] = 0;
        }
        return res;
    }

    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n = nums.size(), sum = 0, maxele;

        sum = accumulate(begin(nums), end(nums),0);
        maxele = *max_element(nums.begin(), nums.end());

        if(sum%k != 0 or maxele>sum/k) return 0;   

        return recc(nums, 0, k, 0, sum/k);     
    }
public:
    bool makesquare(vector<int>& matchsticks) {
        return canPartitionKSubsets(matchsticks, 4);
    }
};