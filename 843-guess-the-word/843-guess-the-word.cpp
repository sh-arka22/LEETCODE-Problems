/**
 * // This is the Master's API interface.
 * // You should not implement it, or speculate about its implementation
 * class Master {
 *   public:
 *     int guess(string word);
 * };
 */
class Solution {
public:
    void findSecretWord(vector<string>& words, Master& m) {
        while(true) {
            srand (1);
            string g = words[rand() % words.size()];
            // cout << g << endl;
            int matched = m.guess(g);
            if (matched == 6) return;
            vector<string> newWords;
            
            for (int j = 0; j < words.size(); j++) {
                if (match(g, words[j]) == matched) newWords.push_back(words[j]);
            }
            words = newWords;
        }
    }

    int match(string s, string t) {
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == t[i]) cnt++;
        }
        return cnt;
    }
};