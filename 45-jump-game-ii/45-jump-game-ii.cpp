class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0;
        int farthest = 0, currentJumpEnd = 0;
        int n = nums.size();
        
        for(int i=0;i<n-1;i++){
            farthest = max(farthest, nums[i]+i);
            if(i == currentJumpEnd){
                jump++;
                currentJumpEnd = farthest;
            }
        }
        return jump;
    }
};