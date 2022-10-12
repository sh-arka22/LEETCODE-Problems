class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string res = "";
        int len = 0;
        for(int i=0;i<n;i++){
            
            int l = i, r = i;
            while(l>=0 and r<n and s[l]==s[r]){
                if(len < (r-l+1)){
                    len = r-l+1;
                    res = s.substr(l,len);
                }
                l--, r++;
            }
            l = i-1, r = i;
            while(l>=0 and r<n and s[l]==s[r]){
                if(len < (r-l+1)){
                    len = r-l+1;
                    res = s.substr(l,len);
                }
                l--, r++;
            }
        }
        return res;
    }
};