class Solution {
public:
    bool detectCapitalUse(string word) {
        int n= word.length();
        regex a("([A-Z]*)");
        regex b("(.[a-z]*)");
        if (regex_match(word, a))
            return true;
        if (regex_match(word, b))
            return true;
        return false;

    }
};