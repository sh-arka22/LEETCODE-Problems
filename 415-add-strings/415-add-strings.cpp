class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size()-1;
        int m = num2.size()-1;
        string ans = "";
        int carr = 0;
        while(n>=0 or m>=0){
            int x1 = n>=0 ? (num1[n--] - '0') : 0;
            int x2 = m>=0 ? (num2[m--] - '0') : 0;
            
            int val = (x1 + x2 + carr) %10;
            carr = (x1 + x2 + carr)/10;
            ans = to_string(val) + ans;
        }
        if(carr){
            ans = to_string(carr) + ans;
        }
        
        return ans;
    }
};