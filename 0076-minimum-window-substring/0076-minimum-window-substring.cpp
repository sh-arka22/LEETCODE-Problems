class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>tar, cnt;
        for(char c:t){
            tar[c]++;
        }
        int n = s.size();
        int match = 0;
        int len = INT_MAX;
        int l = 0, r = 0;
        int begin = 0;
        while(r<n){
            cnt[s[r]]++;
            if(cnt[s[r]] <= tar[s[r]])
                match++;
            while(match == t.size()){
                if(r-l+1 < len){
                    begin = l;
                    len = r-l+1;
                }
                cnt[s[l]]--;
                if(cnt[s[l]] < tar[s[l]]){
                    match--;
                }
                l++;
            }
            r++;
        }
        return len == INT_MAX ? "" : s.substr(begin,len);
    }
};