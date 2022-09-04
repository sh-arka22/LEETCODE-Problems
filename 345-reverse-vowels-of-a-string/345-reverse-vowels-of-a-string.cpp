class Solution {
public:
        bool checkvowel(char x){
        if(x == 'a' || x == 'e'|| x == 'i' || x == 'o'|| x == 'u'
          || x == 'A' || x == 'E'|| x == 'I' || x == 'O'|| x == 'U'){
            return true;
        }
        return false;
     }

    
    string reverseVowels(string s) {
        if(s.length()==1) return s;
        
        int i = 0; 
        int j = s.length()-1;
        
        while(i <= j){
            if(checkvowel(s[i])){
                //s[i] is vowel
                while(!checkvowel(s[j])){
                    j--;
                }
                //s[j] is vowel too
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                j--;
            }
            i++;

        }
        
        return s;
    }
};