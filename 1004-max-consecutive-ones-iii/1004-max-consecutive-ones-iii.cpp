class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int si = 0, ei = 0, n = nums.size(), len = INT_MIN, cnt = 0;
        
        while(ei<n){
            if(nums[ei] == 0)
                cnt++;
            while(cnt > k){
                if(nums[si] == 0)
                    cnt--;
                si++;
            }
            len = max(len, ei-si+1);
            ei++;
        }
        return len;
    }
};