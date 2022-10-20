class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>tar(128,0), cnt(128,0);
        for(auto c:t) tar[c]++;
        int len = (int)1e9;
        int l = 0, r = 0, n = size(s), m = size(t), match = 0;
        int begin = 0;
        while(r<n){
            cnt[s[r]] ++;
            if(cnt[s[r]]<=tar[s[r]])
                match++;
            while(match == m){
                if(r-l+1 < len){
                    begin = l;
                    len = r-l+1;
                }
                cnt[s[l]]--;
                if(cnt[s[l]] < tar[s[l]])
                    match--;
                l++;
            }
            r++;
        }
        return len == (int)1e9 ? "" : s.substr(begin,len);
    }
};