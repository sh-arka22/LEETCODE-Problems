class Solution {
public:
    vector<string> wordSubsets(vector<string>& a, vector<string>& b) {
        vector<int>tar(128,0);
        for(string s:b){
            vector<int>tmp(128,0);
            for(char c:s){
                tmp[c]++;
                tar[c] = max(tar[c], tmp[c]);
            }
        }
        vector<string>ans;
        for(string s:a){
            vector<int>cnt(128,0);
            for(char c:s){
                cnt[c]++;
            }
            bool flag = true;
            for(char c = 'a';c<='z';c++){
                if(tar[c]> cnt[c])
                    flag = false;
            }
            if(flag)
                ans.push_back(s);
        }
        return ans;
    }
};