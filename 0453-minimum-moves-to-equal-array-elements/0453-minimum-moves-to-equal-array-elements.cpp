class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves = 0, mini = (int)1e9;
        for(int x:nums) mini = min(mini, x);
        for(int i=0;i<size(nums);i++){
            moves+= nums[i]-mini;
        }
        return moves;
    }
};