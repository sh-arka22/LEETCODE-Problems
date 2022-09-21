class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0;
        int farthest = 0, currentJumpEnd = 0;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            if(i > currentJumpEnd){
                jump++;
                currentJumpEnd = farthest;
            }
            farthest = max(farthest, nums[i]+i);
        }
        return jump;
    }
};