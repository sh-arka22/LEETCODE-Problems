class Solution {
public:
    int minOperations(int n) {
         vector<int> nums(n);
        for(int i=0;i<n;i++)
            nums[i]=(2*i)+1;
        int mid = nums[(nums.size()-1)/2];
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            count = count + abs(nums[i]-mid);
        }
        return count/2;
    }
};