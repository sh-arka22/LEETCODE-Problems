class Solution {
public:
    int longestSubstring(string s, int k) {
        if(s.size() < k or s.size()==0) return 0;
        if(k==0) return s.size();
        vector<int>freq(128,0);
        for(char c:s) freq[c] += 1;
        int idx = 0;
        for(char c:s) {
            if(freq[c]>=k) idx++;
            else break;
        }
        if(idx==s.size()) return idx;

        int left = longestSubstring(s.substr(0,idx),k);
        int right = longestSubstring(s.substr(idx+1),k);
        return max(left,right);
    }
};