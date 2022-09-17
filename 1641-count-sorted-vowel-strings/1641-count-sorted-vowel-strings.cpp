class Solution {
public:
    int countVowelStrings(int n) {
        return countVowelStringUtil(n, 5);
    }

    int countVowelStringUtil(int n, int vowels) {
        if (n == 1)
            return vowels;
        if (vowels == 1)
            return 1;
        return countVowelStringUtil(n - 1, vowels) + countVowelStringUtil(n, vowels - 1);
    }    
};
