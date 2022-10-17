class Solution {
public:
    unordered_map<char,int>mp;
    int longestKSubstr(string s, int k) {
        int n = size(s);
        int i = 0, j = 0;
        int len = 0;
        while(j<n){
            mp[s[j]]++;
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0)
                    mp.erase(s[i]);
                i++;
            }
            len = max(len, j-i+1);
            j++;
        }
        return len;
    }
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        return longestKSubstr(s, k);
    }
};