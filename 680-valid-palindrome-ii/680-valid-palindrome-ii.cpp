class Solution {
public:
    
    bool check(string s,int i,int j){
        while(i<=j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return check(s,i+1,j) or check(s,i,j-1);
            }
        }
        return true;
    }
};