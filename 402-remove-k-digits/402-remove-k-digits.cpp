class Solution {
public:
    string removeKdigits(string num, int k) {
        string st = "";
        for(char c: num){
            if(st.size() == 0){
                st.push_back(c);
                continue;
            }
            while(k and st.size() and st.back() > c){
                k--;
                st.pop_back();
            }
            st.push_back(c);
        }
        while(k--) st.pop_back();
        int i = 0;
        for(;i<st.size();i++){
            if(st[i] != '0') break;
        }
        st = st.substr(i);
        if(st.size() == 0) return "0";
        return st;
    }
};