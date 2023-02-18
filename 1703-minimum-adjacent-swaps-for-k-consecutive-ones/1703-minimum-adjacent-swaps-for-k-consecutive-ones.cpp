class Solution {
public:
    int minMoves(vector<int>& nums, int k) {
        vector<long> p;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                p.push_back(i);
            }
        }
        // p[i]: the position of i-th 1
        int n = p.size();
        vector<long> presum(n + 1);
        // presum[i]: sum(p[0]...p[i-1])
        for (int i = 0; i < n; i++) {
            presum[i + 1] = (long)(presum[i] + (long)p[i]);
        }

        long res = INT_MAX;

        // sliding window
        if (k % 2 == 1) {
            // if odd
            int radius = (k - 1) / 2;
            for (int i = radius; i < n - radius; i++) {
                // i-radius ... i ... i+radius
                // move radius to i
                // i+1, ..., i+radius
                long right = presum[i + radius + 1] - presum[i + 1];
                // i-radius, ..., i-1
                long left = presum[i] - presum[i - radius];
                res = min(res, right - left);
            }
            return res - radius * (radius + 1);
        }
        else {
            // even
            int radius = (k - 2) / 2;
            for (int i = radius; i < n - radius - 1; i++) {
                // i-radius ... i i+1 ... i+radius+1
                // move radius to i (moving to i+1 is also OK)
                // i+1, ..., i+radius+1
                long right = presum[i + radius + 2] - presum[i + 1];
                // i-radius, ..., i-1
                long left = presum[i] - presum[i - radius];
                res = min(res, right - left - p[i]);
            }
            return res - radius * (radius + 1) - (radius + 1);
        }
        return -1;
    }
};