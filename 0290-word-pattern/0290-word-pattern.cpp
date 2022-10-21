class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string>v;
        string tmp = "";
        for(auto c:s){
            if(c==' '){
                v.push_back(tmp);
                tmp = "";
                continue;
            }
            tmp.push_back(c);
        }
        v.push_back(tmp);
        if(v.size()!=p.size()) return false;
        unordered_map<string, unordered_set<char>>sp;
        unordered_map<char, unordered_set<string>>ps;
        
        for(int i=0;i<size(p);i++){
            sp[v[i]].insert(p[i]);
            ps[p[i]].insert(v[i]);
        }
        for(auto &[key,val]:sp){
            if(val.size()>1) return false;
        }
        for(auto &[key,val]:ps){
            if(val.size()>1) return false;
        }
        return true;
    }
};