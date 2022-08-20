class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i] != ']'){
                st.push(s[i]);
            }
            else{
                string str = "";
                
                while(st.top() != '['){
                    str = st.top() + str;
                    st.pop();
                }
                st.pop();
                
                string times = "";
                while(st.size() and isdigit(st.top())){
                    times = st.top() + times;
                    st.pop();
                }
                
                int k_times = stoi(times);
                
                while(k_times--){
                    for(char c:str) st.push(c);
                }
            }
        }
        
        string ans = "";
        while(st.size()){
            ans = st.top() + ans;
            st.pop();
        }
        
        return ans;
    }
};