class Solution {
public:
  int check(std::vector<int> nums, int len)
  {
    int ma = 0;
    int start = 0;
    int end = start + len - 1;
    for (int i = start; i <= end; ++i)
    {
      ma += nums[i];
    }
    int sum = ma;
    while (end < nums.size())
    {
      end++;
      if (end >= nums.size())
        break;
      sum -= nums[start++];
      sum += nums[end];
      ma = max(ma, sum);
    }
    return ma;
  }
  int minSubArrayLen(int s, vector<int>& nums) {
    int mi = 1;
    int ma = nums.size();
    int res = nums.size() + 1;
    // debug(check(nums, 2));
    while (mi <= ma)
    {
      int mid_size = (mi + ma) / 2;
      int sum = check(nums, mid_size);
      if (sum >= s)
      {
        ma = mid_size - 1;
        res = min(res, mid_size);
      }
      else
        mi = mid_size + 1;
    }
    return (res == nums.size() + 1) ? 0 : res;
  }
};