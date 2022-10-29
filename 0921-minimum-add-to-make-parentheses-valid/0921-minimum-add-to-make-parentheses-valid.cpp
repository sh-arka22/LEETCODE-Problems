class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;
        for(char c:s){
            if(c=='(') open++;
            if(c==')' and open!=0) open--;
        }
        
        int close = 0;
        reverse(begin(s), end(s));
        for(char c:s){
            if(c==')') close++;
            if(c=='(' and close!=0) close--;
        }
        
        return open+close;
    }
};