class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>cSum;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j = i;j<n;j++){
                sum += nums[j];
                cSum.push_back(sum);
            }
        }
        sort(begin(cSum), end(cSum));
        int total = 0;
        
        for(int i=left-1;i<right;i++){
            total = total%1000000007 + cSum[i];
        }
        return total;
    }
};