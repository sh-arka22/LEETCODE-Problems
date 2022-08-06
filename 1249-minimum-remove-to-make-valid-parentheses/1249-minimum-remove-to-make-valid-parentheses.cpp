class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();
        
        int left = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                left++;
            }
            else if(s[i] == ')'){
                if(left == 0){
                    s[i] = '#';
                    continue;
                }
                left --;
            }
        }
        
        int right = 0;
        for(int i = n-1;i>=0;i--){
            if(s[i] == ')'){
                right++;
            }
            else if(s[i] == '('){
                if(right == 0){
                    s[i] = '#';
                    continue;
                }
                right--;
            }
        }
        
        string res = "";
        
        for(int i=0;i<n;i++){
            if(s[i] != '#'){
                res += s[i];
            }
        }
        return res;
    }
};