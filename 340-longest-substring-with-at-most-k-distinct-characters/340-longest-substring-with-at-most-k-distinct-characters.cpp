class Solution {
public:
    unordered_map<char,int>mp;
    int longestKSubstr(string s, int k) {
        int len = 0;
        int l = 0, r = 0;
        int n = s.size();
        while(r<n){
            mp[s[r]]++;
            while(mp.size()>k){
                mp[s[l]]--;
                if(mp[s[l]] == 0){
                    mp.erase(s[l]);
                }
                l++;
            }
            len = max(len, r-l+1);
            r++;
        }
        // if(mp.size()<k){
        //     return -1;
        // }
        return len;
    }
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        return longestKSubstr(s, k);
    }
};