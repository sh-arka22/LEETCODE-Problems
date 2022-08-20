class Solution {
public:
    void reverseWords(vector<char>& s) {
        reverse(s.begin(), s.end());
        int n=s.size();
    int l = 0, r = 0;
    
    while(r<n){
        if(s[r] == ' '){
            reverse(s.begin()+l, s.begin()+r);
            // reverse(s.begin()+l,s.begin()+r);
            r++;
            l = r;
        }
        else{
            r++;
        }
    }
        
    reverse(s.begin()+l,s.end());
    }
};