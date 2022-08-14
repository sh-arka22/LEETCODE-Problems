class Solution {
public:
    int *parr;
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    bool equationsPossible(vector<string>& equations) {
        parr = new int[26];
        for(int i=0;i<26;i++) parr[i] = i;
        
        for(string s:equations){
            if(s[1] == '='){
                int p1 = findParr(s[0] - 'a');
                int p2 = findParr(s[3] - 'a');
                if(p1 != p2) parr[p1] = p2;
            }
            else{
                
            }
        }
        for(string s:equations){
            if(s[1] == '!'){
                int p1 = findParr(s[0] - 'a');
                int p2 = findParr(s[3] - 'a');
                if(p1 == p2) return false;
            }
            else{
                
            }
        }
        
        return true;
    }
};