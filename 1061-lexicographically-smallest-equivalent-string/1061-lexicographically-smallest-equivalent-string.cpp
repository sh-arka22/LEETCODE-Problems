class Solution {
private:
    char parr[26];
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        for(int i=0;i<26;i++){
            parr[i] = i;
        }
        for(int i=0;i<s1.size();i++){
            char c1 = s1[i], c2 = s2[i];
            int p1 = findParr(c1 - 'a');
            int p2 = findParr(c2 - 'a');
            
            /**
            macking the smaller character as the parrent
            */
            parr[p1] = min(p1,p2);
            parr[p2] = min(p1,p2);
        }
        string ans = "";
        for(char ch:baseStr){
            int p = findParr(ch-'a');
            ans += (char)(p+'a');
        }
        return ans;
    }
};