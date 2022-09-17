class Solution {
public:
    int countSubstrings(string s, string t) {
        int n = s.size(), m = t.size();
        int res = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int miss = 0;
                for(int pos = 0;i+pos<n and j+pos<m;pos++){
                    if(s[i+pos] != t[j+pos] and ++miss > 1) break;
                    res += miss;
                }
            }
        }
        return res;
    }
};