class Solution {
    int longestSubArrWithSumK(vector<int>arr, int tar){
        int start = 0, end = 0, sum = 0, maxLength = 0, n = size(arr);
        while (end < n) {
            sum += arr[end];
            while(start <= end and sum>tar){
                sum -= arr[start++];
            }
            if(sum==tar){
                maxLength = max(maxLength, end-start+1);
            }
            end++;
        }
        return maxLength;
    }
public:
    int minOperations(vector<int>& nums, int x) {
        int tar = accumulate(begin(nums), end(nums), 0) - x;
        if(tar == 0) return size(nums);
        int ans = size(nums)-longestSubArrWithSumK(nums, tar);
        if(ans == size(nums)) return -1;
        return  ans;
    }
};