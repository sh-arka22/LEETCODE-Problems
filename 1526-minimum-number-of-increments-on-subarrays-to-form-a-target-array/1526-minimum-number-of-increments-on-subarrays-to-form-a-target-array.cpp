class Solution {
public:
    int minNumberOperations(vector<int>& A) {
        int res = 0, pre = 0;
        for (int a: A) {
            res += max(a - pre, 0);
            pre = a;
        }
        return res;
    }
};