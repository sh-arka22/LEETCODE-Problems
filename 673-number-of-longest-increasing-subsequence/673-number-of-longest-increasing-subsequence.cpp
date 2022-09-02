class Solution {
public:
    int *LEN;
    int *CNT;

    int  count(vector<int>& nums){
        int maxLen = 0, maxCount = 0;
        for(int i=0;i<nums.size();i++){
            LEN[i] = 1;
            CNT[i] = 1;
            for(int j = i-1;j>=0;j--){
                if(nums[i] > nums[j]){
                    if(LEN[i] < LEN[j]+1){
                        LEN[i] = LEN[j]+1;
                        CNT[i] = CNT[j];
                    }
                    else if(LEN[i] == LEN[j]+1){
                        CNT[i] += CNT[j];
                    }
                }
            }
            if(LEN[i] > maxLen){
                maxLen = LEN[i];
                maxCount = CNT[i];
            }
            else if(LEN[i] == maxLen){
                maxCount += CNT[i];
            }
        }
        return maxCount;
    }


    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        LEN = new int[n];
        CNT = new int[n];
        return count(nums);
    }
};