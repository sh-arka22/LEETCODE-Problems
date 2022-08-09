class Solution {
public:
    long long numberOfWays(string s) {
        int n = s.size();
        long long res = 0, l_z = 0, l_o = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                l_o++;
            }
            else l_z ++;
        }
        
        long long r_z = 0, r_o = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                res += (r_z * l_z);
                l_o--;
                r_o++;
            }
            else{
                res += (r_o * l_o);
                l_z--;
                r_z++;
            }
        }
        return res;
    }
};