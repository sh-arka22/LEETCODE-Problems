class Solution {
    #define BIT_SIZE 20001
    #define BIT_OFFSET 10001
    int bit[BIT_SIZE] = {0};
    
    inline void bitUpdate(int index) {
        while (index < BIT_SIZE) {
            bit[index]++;
            index += index & -index;
        }
    }
    
    inline int bitAns(int index) {
        int result = 0;
        while (index > 0) {
            result += bit[index];
            index -= index & -index;
        }
        return result;
    }
    
public:
    vector<int> countSmaller(const vector<int>& nums) {
        vector<int> result (nums.size());
        for (int index = nums.size() - 1; index >= 0; --index) {
            result[index] = bitAns(nums[index] + BIT_OFFSET - 1);
            bitUpdate(nums[index] + BIT_OFFSET);
        }
        return result;
    }
};