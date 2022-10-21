class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int& nu: nums) {
            mp[gcd(nu, k)]++;
        }
        long long res = 0;
        for (auto& [a, c1]: mp) {
            for (auto & [b, c2]: mp) {
                if (a <= b && a*(long) b %k == 0) {
                    res += a < b?(long)c1*c2:(long)c1*(c1-1)/2;
                }
            }
        }
        return res;    
    }
};