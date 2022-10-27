class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int mid = nums[(nums.size()-1)/2];
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            count = count + abs(nums[i]-mid);
        }
        return count;
    }
};