class Solution {
public:
    unordered_map<string,string>parr;
    string findParr(string v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    bool areSentencesSimilarTwo(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {
        for(auto str:sentence1) parr[str] = str;
        for(auto str:sentence2) parr[str] = str;
        
        for(auto &vv:similarPairs){
            string v = vv[0];
            string u = vv[1];
            string p1 = findParr(v);
            string p2 = findParr(u);
            if(p1 != p2){
                parr[p2] = p1;
            }
        }
        if(sentence1.size() != sentence2.size()) return false;
        int n = min(sentence1.size(),sentence2.size());
        for(int i=0;i<n;i++){
            string v = sentence1[i];
            string u = sentence2[i];
            
            string p1 = findParr(v);
            string p2 = findParr(u);
            if(p1 != p2) return false;
        }
        
        return true;
    }
};