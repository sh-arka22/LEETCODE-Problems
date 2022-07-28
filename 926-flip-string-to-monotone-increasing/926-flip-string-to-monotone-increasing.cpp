class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n = s.size();
        int zero = 0;
        int one = 0;
        int res = n;
        for(int i = 0;i<n;i++){
            zero += s[i] == '0';
        }
        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                zero --;
            }
            else{
                res = min(res,zero + one);
                one++;
            }
        }
        res = min(res,one);
        return res;
    }
    /**
     0 0 1 1 0
     
     0 1 0 1 1 0
    */
};