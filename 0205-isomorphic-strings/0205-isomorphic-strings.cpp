class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,unordered_set<char>> ST, TS;
        int n = s.size();
        for(int i=0;i<n;i++){
            ST[s[i]].insert(t[i]);
            TS[t[i]].insert(s[i]);
        }
        
        for(auto& it:ST){
            if(it.second.size() > 1){
                return false;
            }
        }
        for(auto& it:TS){
            if(it.second.size()>1){
                return false;
            }
        }
        
        return true;
    }
};