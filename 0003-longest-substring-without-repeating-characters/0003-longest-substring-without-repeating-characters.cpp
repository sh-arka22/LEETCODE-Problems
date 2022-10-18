class Solution {
private:
    int lengthOfLongestSubstringAtMostK(string &s, int k){
        unordered_map<char,int>mp;
        int n = size(s);
        int len = 0;
        int l = 0, r = 0;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]]>k){
                mp[s[l]]--;
                if(mp.count(mp[s[l]]) == 0)
                    mp.erase(mp[s[l]]);
                l++;
            }
            len = max(len, r-l+1);
            r++;
        }
        return len;
    }
public:
    int lengthOfLongestSubstring(string s) {
        return lengthOfLongestSubstringAtMostK(s,1);
    }
};