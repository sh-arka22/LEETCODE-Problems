class Solution {
public:
    int minOperations(int n) {
        return n % 2 == 0 ? n * n / 4 : (n * n - 1) / 4;
    }
};