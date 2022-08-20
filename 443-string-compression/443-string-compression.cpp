class Solution {
public:
    int compress(vector<char>& chars) {
        
        vector<char>res;
        int n = chars.size();
        int cnt = 1;
        char prev = chars[0];
        for(int i=1;i<n;i++){
            if(chars[i] == prev){
                cnt++;
            }
            else{
                res.push_back(prev);
                if(cnt != 1){
                    string num = to_string(cnt);
                    for(char c:num) res.push_back(c);
                } 
                    // res.push_back((char)cnt-'0');
                prev = chars[i];
                cnt = 1;
            }
        }
        
        res.push_back(prev);
        if(cnt != 1){
            string num = to_string(cnt);
            for(char c:num) res.push_back(c);
        } 
        
        chars = res;
        return res.size();
    }
};