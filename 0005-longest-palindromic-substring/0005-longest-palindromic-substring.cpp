class Solution {
public:
    string longestPalindrome(string s) {
    int n = s.size();
    string t = "#";
    for (int i = 0; i < n; i++) {
        t += s[i];
        t += "#";
    }
    n = t.size();

    vector<int> p(n, 0);
    int c = 0, r = 0;
    int maxLen = 0, center = 0;
    for (int i = 0; i < n; i++) {
        int i_mirror = 2 * c - i;
        if (i < r) {
            p[i] = min(r - i, p[i_mirror]);
        }

        int a = i + (1 + p[i]), b = i - (1 + p[i]);
        while (a < n && b >= 0 && t[a] == t[b]) {
            p[i]++;
            a++;
            b--;
        }

        if (i + p[i] > r) {
            c = i;
            r = i + p[i];
        }
        if (p[i] > maxLen) {
            maxLen = p[i];
            center = i;
        }
    }

    return s.substr((center - maxLen) / 2, maxLen);
}
};