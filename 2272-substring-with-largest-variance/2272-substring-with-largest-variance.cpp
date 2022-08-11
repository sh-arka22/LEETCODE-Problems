class Solution {
public:
    int largestVariance(string s) {
    int total = 0;
    unordered_set<char> unique(begin(s), end(s));

    for (char a: unique) {
        for (char b: unique) {
            if (a == b) continue;

            int countA = 0, countB = 0;
            for (auto ch: s) {
                countA += (ch == a); //1
                countB += (ch == b); //1
                if (countA - countB < 0) {
                    countA = 0;
                    countB = 0;
                }
                // cout<<ch<<total<<" ";
                total = max(total, countB == 0 ? countA - 1 : countA - countB);
                
            }
        }
    }
    return total;
    }
};