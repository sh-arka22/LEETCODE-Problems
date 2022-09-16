class Solution {
private:
    bool compare(string& s1, string& s2){
        if(s1.size() != s2.size() + 1) return false;

        int first = 0;
        int second = 0;

        while(first < s1.size()){
            if(second < s2.size() && s1[first] == s2[second]){
                first ++;
                second ++;
            }
            else first ++;
        }
        if(first == s1.size() && second == s2.size()) return true;
        else return false; 
    }
    
    int LIS(vector<string>& words){
        int n = words.size();
        vector<int>dp(n,1);
        int maxLen = 1;
        for(int ei = 0; ei<n; ei++){
            for(int si = 0;si<ei;si++){
                if(compare(words[ei], words[si]) and 1+dp[si] > dp[ei]){
                    dp[ei] = 1+dp[si];
                }
            }
            maxLen = max(maxLen, dp[ei]);
        }
        return maxLen;
    }
    
    
public:
    bool static cmp(string &s1, string &s2){
        return s1.size() < s2.size();
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), cmp);
        return LIS(words);
    }
};