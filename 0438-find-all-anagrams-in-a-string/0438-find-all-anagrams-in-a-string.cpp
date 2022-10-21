class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>f1(128,0);
        vector<int>f2(128,0);
        for(char c:p) f2[c]++;
        int n = size(s), m = size(p);
        if(n<m) return {};
        int l = 0, r = 0;
        vector<int>ans;
        while(r<m) f1[s[r++]]++;
        while(r<n){
            if(f1 == f2) ans.push_back(l);
            f1[s[l]]--;
            l++;
            f1[s[r]]++;
            r++;
        }
        if(f1 == f2) ans.push_back(l);
        return ans;
    }
};