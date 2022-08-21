class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        int left = 0, right = 0;
        int maxi = 0;
        for(int i=0;i<n;i++){
            left += s[i] == '(';
            right += s[i] == ')';
            if(left == right) maxi = max(maxi,left+right);
            if(right>left) left=right=0;
        }
        left = 0 , right = 0;
        for(int i=n-1;i>=0;i--){
            left += s[i] == '(';
            right += s[i] == ')';
            if(left == right) maxi = max(maxi,left+right);
            if(left>right) left=right=0;
        }
        return maxi;
    }
};