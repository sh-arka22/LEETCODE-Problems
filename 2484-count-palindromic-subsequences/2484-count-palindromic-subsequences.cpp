class Solution {
public:
    static int countPalindromes(const string& s) {
        const int n = size(s);
        if (n < 5)
            return 0;
        int cnt[10]{}, cnt2[100]{}, rcnt[10]{}, rcnt2[100]{};
        for (int i = n - 1; i > 0; --i) {
            for (int j = 0; j < 10; ++j)
                rcnt2[10 * (s[i] - '0') + j] += rcnt[j];
            ++rcnt[s[i] - '0'];
        }
        int ret = 0;
        for (int i = 0; i < n - 3; ++i) {
            for (int j = 0; j < 10; ++j)
                cnt2[10 * (s[i] - '0') + j] += cnt[j];
            ++cnt[s[i] - '0'];
            --rcnt[s[i + 1] - '0'];
            for (int j = 0; j < 10; ++j)
                rcnt2[10 * (s[i + 1] - '0') + j] -= rcnt[j];
            for (int j = 0; j < 100; ++j) {
                int64_t a = cnt2[j];
                a *= rcnt2[j];
                ret = (ret + a) % 1000000007;
            }
        }
        return ret;
    }
};