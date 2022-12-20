class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int left = 0;
        vector<string> result;

        while (left < words.size()) {
            int right = findRight(left, words, maxWidth);
            result.push_back(justify(left, right, words, maxWidth));
            left = right + 1;
        }

        return result;
    }

private:
    int findRight(int left, vector<string>& words, int maxWidth) {
        int right = left;
        int sum = words[right++].length();

        while (right < words.size() && (sum + 1 + words[right].length()) <= maxWidth)
            sum += 1 + words[right++].length();

        return right - 1;
    }

    string justify(int left, int right, vector<string>& words, int maxWidth) {
        if (right - left == 0) return padResult(words[left], maxWidth);

        bool isLastLine = right == words.size() - 1;
        int numSpaces = right - left;
        int totalSpace = maxWidth - wordsLength(left, right, words);

        string space = isLastLine ? " " : blank(totalSpace / numSpaces);
        int remainder = isLastLine ? 0 : totalSpace % numSpaces;

        string result;
        for (int i = left; i <= right; i++)
            result += words[i] + space + (remainder-- > 0 ? " " : "");
        return padResult(trim(result), maxWidth);
    }

    int wordsLength(int left, int right, vector<string>& words) {
        int wordsLength = 0;
        for (int i = left; i <= right; i++) wordsLength += words[i].length();
        return wordsLength;
    }

    string padResult(string result, int maxWidth) {
        return result + blank(maxWidth - result.length());
    }

    string blank(int length) {
        return string(length, ' ');
    }
    inline std::string trim(std::string& str) {
    str.erase(str.find_last_not_of(' ')+1);         //suffixing spaces
    str.erase(0, str.find_first_not_of(' '));       //prefixing spaces
    return str;
}
    // string trim(string str) {
    //     int i = 0, j = str.length() - 1;
    //     while (i <= j && str[i] == ' ') i++;
    //     while (i <= j && str[j] == ' ') j--;
    //     return str.substr(i, j - i + 1);
    // }
};