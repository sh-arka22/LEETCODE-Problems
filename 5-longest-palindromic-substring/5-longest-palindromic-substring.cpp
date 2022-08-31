class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        
        int len = 0;
        string res;
        for(int i=0;i<n;i++){
            int l,r;
            
            //odd length
            l=i, r=i;
            while(l>=0 and r<n and s[l] == s[r]){
                if(r-l+1>len){
                    len = r-l+1;
                    res = s.substr(l,len);
                }
                l--; r++;
            }
            
            
            //even length
            l=i, r=i+1;
            while(l>=0 and r<n and s[l] == s[r]){
                if(r-l+1>len){
                    len = r-l+1;
                    res = s.substr(l,len);
                }
                l--; r++;
            }
        }
        return res;
    }
};