class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.size(), m = typed.size();
        if(n>m) return 0;
        int i = 0, j = 0;
        if(name[0] != typed[0]) return 0;
        while(i<n and j<m){
            if(name[i] == typed[j]) i++, j++;
            else if(name[i-1] == typed[j]) j++;
            else return 0;
        }
        
        while(j<m){
            if(name[i-1] != typed[j++]) return 0;
        }
        
        return (i<n ? 0 : 1);
    }
};